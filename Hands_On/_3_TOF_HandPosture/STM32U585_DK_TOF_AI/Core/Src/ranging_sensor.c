/**
  ******************************************************************************
  * @file    ranging_sensor.c
  * @author  MCD Application Team
  * @brief   This example code shows how to use the ranging sensor feature in the
  *          b_u585i_iot02_ranging_sensors  driver
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup STM32U5xx_HAL_Examples
  * @{
  */

/** @addtogroup BSP
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
#define POLLING_PERIOD (250U) /* milliseconds */

/* Private variables ---------------------------------------------------------*/
static RANGING_SENSOR_Capabilities_t Cap;
static RANGING_SENSOR_ProfileConfig_t Profile;

/* Private function prototypes -----------------------------------------------*/
static void print_result(RANGING_SENSOR_Result_t *Result);


/* Median */
#define NORMALIZATION_RANGING_CENTER              (295)
/* Interquartile range */
#define NORMALIZATION_RANGING_IQR                 (196)
/* Median */
#define NORMALIZATION_SIGNAL_CENTER               (281)
/* Interquartile range */
#define NORMALIZATION_SIGNAL_IQR                  (452)

#define RANGING_OK_5                              (5U)
#define RANGING_OK_9                              (9U)

#define MAX_DISTANCE (350)
#define MIN_DISTANCE (150)

#define DEFAULT_RANGING_VALUE                     (4000)
/* Used if the zone is not valid */
#define DEFAULT_SIGNAL_VALUE                      (0)

static int ValidateFrame(RANGING_SENSOR_Result_t *Input_AI_Data)
{
  int valid;
  int idx;
  float min = 4000.0;

  /* Find minimum valid distance */
  for (idx = 0; idx < VL53L5CX_MAX_NB_ZONES; idx++)
  {
    if ((Input_AI_Data->ZoneResult[idx].NumberOfTargets > 0) && (Input_AI_Data->ZoneResult[idx].Status[0] == RANGING_OK_5 || Input_AI_Data->ZoneResult[idx].Status[0] == RANGING_OK_9)
        && ((float)(Input_AI_Data->ZoneResult[idx].Distance[0]) < min))
    {
      min = (float)(Input_AI_Data->ZoneResult[idx].Distance[0]);
    }
  }

  for (int i = 0; i < VL53L5CX_MAX_NB_ZONES; i++)
  {
    if (Input_AI_Data->ZoneResult[i].NumberOfTargets == 0)
    {
      if ((long)Input_AI_Data->ZoneResult[i].Distance[0] < MAX_DISTANCE && (long)Input_AI_Data->ZoneResult[i].Distance[0] > MIN_DISTANCE)
      {

      }
      else
      {
        Input_AI_Data->ZoneResult[i].Distance[0] = 4000;
        Input_AI_Data->ZoneResult[i].Signal[0] = 0;
      }
    }

  }

#if 0

  printf("NumberOfTarget \r\n");

  for(int i = 0 ; i <VL53L5CX_MAX_NB_ZONES; i++ )
  {
	  if((i!=0)&&(i%8==0)){
		  printf("\r\n");
	  }
	  printf(" %5ld",Input_AI_Data->ZoneResult[i].Distance[0]);

  }
  printf("\r\n");
#endif

  //return 1;

  uint8_t count = 0;
  for (idx = 0; idx < VL53L5CX_MAX_NB_ZONES; idx++)
  {
    if ((float)(Input_AI_Data->ZoneResult[idx].Distance[0]) < 300)
    {
      count++;
    }
  }

  if (count > 20)
  {
    return 1;
  }
  else
  {
    return 0;
  }




#if 0
  for (idx = 0; idx <SENSOR__MAX_NB_OF_ZONES; idx++)
  {
    /* Check if the data is valid */
    valid = (Input_AI_Data->nb_targets[idx] > 0)
        && (Input_AI_Data->target_status[idx] == RANGING_OK_5 || Input_AI_Data->target_status[idx] == RANGING_OK_9)
        && (Input_AI_Data->ranging[idx] < min + BACKGROUND_REMOVAL);

    /* If not valid, load default value */
    if (!valid)
    {
      Input_AI_Data->ranging[idx] = DEFAULT_RANGING_VALUE;
      Input_AI_Data->peak[idx] = DEFAULT_SIGNAL_VALUE;
    }
  }
  return(0);
#endif
}

static int NormalizeData(float *normalized_data, RANGING_SENSOR_Result_t *Input_AI_Data)
{
  int idx;
  for (idx = 0; idx <VL53L5CX_MAX_NB_ZONES; idx++)
  {
#if 1
    /* Signed 14.2 */
    normalized_data[2*idx] = (float)((float)(Input_AI_Data->ZoneResult[idx].Distance[0]) - NORMALIZATION_RANGING_CENTER) / NORMALIZATION_RANGING_IQR;
    /* Unsigned 21.11 */
    normalized_data[2*idx + 1] = (float)((float)(Input_AI_Data->ZoneResult[idx].Signal[0]) - NORMALIZATION_SIGNAL_CENTER) / NORMALIZATION_SIGNAL_IQR;
#else
    normalized_data[2*idx] = (float)(float)(Input_AI_Data->ZoneResult[idx].Distance[0]);
    normalized_data[2*idx + 1] = (float)(float)(Input_AI_Data->ZoneResult[idx].Signal[0]);
#endif
  }

  return(0);
}


float input_data_in[8*8*2] = {0,};
/**
  * @brief  Ranging sensor demo
  * @param  None
  * @retval 0 if ok, else value < 0.
  */
int32_t Rs_demo(void)
{
  int32_t                   result  = 0;
  uint32_t                  chipId;
  RANGING_SENSOR_Result_t   distance;

  printf("\n******RANGING SENSOR******\n");
  printf("Press user button for next Example\n");
  /* Initialize user button */
  if (BSP_PB_Init(BUTTON_USER, BUTTON_MODE_EXTI) != BSP_ERROR_NONE) result--;
  printf("Waiting for Ranging Sensor Initialization ... \n");
  if (BSP_RANGING_SENSOR_Init(VL53L5A1_DEV_CENTER) != BSP_ERROR_NONE) result--;
  if (BSP_RANGING_SENSOR_ReadID(VL53L5A1_DEV_CENTER, &chipId) != BSP_ERROR_NONE) result--;
  if (BSP_RANGING_SENSOR_GetCapabilities(VL53L5A1_DEV_CENTER, &Cap) != BSP_ERROR_NONE) result--;

  Profile.RangingProfile = RS_PROFILE_8x8_CONTINUOUS;
  Profile.TimingBudget = 30; /* 5 ms < TimingBudget < 100 ms */
  Profile.Frequency = 5;//5; /* Hz */
  Profile.EnableAmbient = 0; /* Enable: 1, Disable: 0 */
  Profile.EnableSignal = 1; /* Enable: 1, Disable: 0 */

  /* set the profile if different from default one */
  if (BSP_RANGING_SENSOR_ConfigProfile(VL53L5A1_DEV_CENTER, &Profile) != BSP_ERROR_NONE) result--;
  if (BSP_RANGING_SENSOR_Start(VL53L5A1_DEV_CENTER, RS_MODE_BLOCKING_CONTINUOUS) != BSP_ERROR_NONE)  result--;

  /* GetDistance function */
  printf("Distance values:\n");

#if 1
  {
    if (BSP_RANGING_SENSOR_GetDistance(VL53L5A1_DEV_CENTER, &distance) != BSP_ERROR_NONE) result--;

    NormalizeData(input_data_in,&distance);
    //print_result(&distance);
    HAL_Delay(POLLING_PERIOD);
  }
#else// Only Demo
  while(1)
  {
    if (BSP_RANGING_SENSOR_GetDistance(VL53L5A1_DEV_CENTER, &distance) != BSP_ERROR_NONE) result--;

    NormalizeData(input_data_in,&distance);
    print_result(&distance);
    HAL_Delay(POLLING_PERIOD);
  }
  //UserButtonPressed = RESET;
#endif

  return result;
}

int32_t Rs_Run(void)
{
  int32_t result = 0;
  RANGING_SENSOR_Result_t distance;

  if (BSP_RANGING_SENSOR_GetDistance(VL53L5A1_DEV_CENTER, &distance) != BSP_ERROR_NONE)
    result--;

  //Validation
  result = ValidateFrame(&distance);
  //Normalize
  NormalizeData(input_data_in, &distance);
  //print_result(&distance);
  HAL_Delay(100);

  return result;
}


static void print_result(RANGING_SENSOR_Result_t *Result)
{
  int8_t i, j, k, l;
  uint8_t zones_per_line;

  zones_per_line = ((Profile.RangingProfile == RS_PROFILE_8x8_AUTONOMOUS) ||
         (Profile.RangingProfile == RS_PROFILE_8x8_CONTINUOUS)) ? 8 : 4;

  printf("53L5A1 Simple Ranging demo application\n");
  printf("--------------------------------------\n\n");

  printf("Cell Format :\n\n");
  for (l = 0; l < RANGING_SENSOR_NB_TARGET_PER_ZONE; l++)
  {
    printf(" [38;5;10m%20s[0m : %20s\n", "Distance [mm]", "Status");
    if ((Profile.EnableAmbient != 0) || (Profile.EnableSignal != 0))
    {
      printf(" %20s : %20s\n", "Signal [kcps/spad]", "Ambient [kcps/spad]");
    }
  }

  printf("\n\n");

  for (j = 0; j < Result->NumberOfZones; j += zones_per_line)
  {
    for (i = 0; i < zones_per_line; i++) /* number of zones per line */
      printf(" -----------------------------");
    printf("\n");

    for (i = 0; i < zones_per_line; i++)
      printf("|                             ");
    printf("|\n");

    for (l = 0; l < RANGING_SENSOR_NB_TARGET_PER_ZONE; l++)
    {
      /* Print distance and status */
      for (k = (zones_per_line - 1); k >= 0; k--)
      {
        if (Result->ZoneResult[j+k].NumberOfTargets > 0)
          printf("| [38;5;10m%5ld[0m  :  %5ld ",
              (long)Result->ZoneResult[j+k].Distance[l],
              (long)Result->ZoneResult[j+k].Status[l]);
        else
          printf("| %5s  :  %5s ", "X", "X");
      }
      printf("|\n");

      if ((Profile.EnableAmbient != 0) || (Profile.EnableSignal != 0))
      {
        /* Print Signal and Ambient */
        for (k = (zones_per_line - 1); k >= 0; k--)
        {
          if (Result->ZoneResult[j+k].NumberOfTargets > 0)
          {
            if (Profile.EnableSignal != 0)
              printf("| %5ld  :  ", (long)Result->ZoneResult[j+k].Signal[l]);
            else
              printf("| %5s  :  ", "X");

            if (Profile.EnableAmbient != 0)
              printf("%5ld ", (long)Result->ZoneResult[j+k].Ambient[l]);
            else
              printf("%5s ", "X");
          }
          else
            printf("| %5s  :  %5s ", "X", "X");
        }
        printf("|\n");
      }
    }
  }

  for (i = 0; i < zones_per_line; i++)
    printf(" -----------------------------");
  printf("\n");
}



/**
  * @}
  */

/**
  * @}
  */

