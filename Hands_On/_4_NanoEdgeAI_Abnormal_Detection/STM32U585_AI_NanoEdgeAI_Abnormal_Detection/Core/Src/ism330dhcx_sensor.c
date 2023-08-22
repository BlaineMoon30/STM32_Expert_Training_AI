/*
 * ism330dhcx_sensor.c
 *
 *  Created on: Aug 21, 2023
 *      Author: grand
 */

#include "ism330dhcx_sensor.h"

uint8_t tx_buf[10] = {0,};
uint8_t rx_buf[10] = {0,};

void ism330dhck_read_reg(uint8_t reg, uint8_t *rx_data, uint16_t size);
void ism330dhck_write_reg(uint8_t reg, uint8_t tx_data, uint16_t size);

void ism330dhcx_init(void)
{

  uint8_t set_reg_value = 0x00;
  uint8_t get_reg_value = 0x00;

  printf("ism330dhcx_sensor init start \r\n");

  ism330dhck_read_reg(ISM330DHCX_WHO_AM_I, &get_reg_value, 1);
  if(get_reg_value == ISM330DHCX_ID)
  {
    printf("ism330dhcx_sensor detected and ID = %x\r\n",get_reg_value);
  }

  // ISM330DHCX_CTRL1_XL -> ODR:4, FS:2, LPF2:1, N
  ism330dhck_read_reg(ISM330DHCX_CTRL1_XL, &get_reg_value, 1);
  set_reg_value |= ((ISM330DHCX_XL_ODR_104Hz)<<4)|(ISM330DHCX_2g<<2);

  ism330dhck_write_reg(ISM330DHCX_CTRL1_XL, set_reg_value, 1);
  ism330dhck_read_reg(ISM330DHCX_CTRL1_XL, &get_reg_value, 1);

  printf("ism330dhcx_sensor init finish\r\n");

}

void ism330dhck_read_reg(uint8_t reg, uint8_t *rx_data, uint16_t size)
{

  uint8_t read_reg = reg;
  if ((HAL_I2C_Master_Transmit(&hi2c2, ISM330DHCX_I2C_ADD_H, &read_reg, 1, 0xffff)) != HAL_OK)
  {
    Error_Handler();
  }
  if ((HAL_I2C_Master_Receive(&hi2c2, ISM330DHCX_I2C_ADD_H, rx_data, size, 0xfff)) != HAL_OK)
  {
    Error_Handler();
  }

}

void ism330dhck_write_reg(uint8_t reg, uint8_t tx_data, uint16_t size)
{

  uint8_t tx_reg[2];
  tx_reg[0] = reg;
  tx_reg[1] = tx_data;

  if ((HAL_I2C_Master_Transmit(&hi2c2, ISM330DHCX_I2C_ADD_H, tx_reg, size + 1, 0xffff)) != HAL_OK)
  {
    Error_Handler();
  }

}

void ism330dhck_read_acc(float* rx_data)
{

  uint8_t xyz_raw_data[6];
  int16_t xyz_data_16bit[3];

  ism330dhck_read_reg(ISM330DHCX_OUTX_L_A, &xyz_raw_data[0], 6);

  xyz_data_16bit[0] = (int16_t)xyz_raw_data[1];
  xyz_data_16bit[0] = (xyz_data_16bit[0] * 256) + (int16_t)xyz_raw_data[0];
  xyz_data_16bit[1] = (int16_t)xyz_raw_data[3];
  xyz_data_16bit[1] = (xyz_data_16bit[1] * 256) + (int16_t)xyz_raw_data[2];
  xyz_data_16bit[2] = (int16_t)xyz_raw_data[5];
  xyz_data_16bit[2] = (xyz_data_16bit[2] * 256) + (int16_t)xyz_raw_data[4];

  float sensitivity = 0.061f;
  /* Calculate the data. */
  rx_data[0] = ((float)((float)xyz_data_16bit[0] * sensitivity));
  rx_data[1] = ((float)((float)xyz_data_16bit[1] * sensitivity));
  rx_data[2] = ((float)((float)xyz_data_16bit[2] * sensitivity));

  //printf("Acceleration: %.3f %.3f %.3f \n", rx_data[0], rx_data[1], rx_data[2]);

}

