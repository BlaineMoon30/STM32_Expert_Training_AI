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

  printf("ism330dhcx_sensor init done\r\n");
}

void ism330dhck_read_reg(uint8_t reg, uint8_t *rx_data, uint16_t size)
{
  uint8_t read_reg = reg;
  if ((HAL_I2C_Master_Transmit(&hi2c2, ISM330DHCX_I2C_ADD_H, &read_reg, 1, 0xffff)) != HAL_OK)
  {

  }
  if ((HAL_I2C_Master_Receive(&hi2c2, ISM330DHCX_I2C_ADD_H, rx_data, size, 0xfff)) != HAL_OK)
  {

  }
}

void ism330dhck_write_reg(uint8_t reg, uint8_t tx_data, uint16_t size)
{
  uint8_t tx_reg[2];
  tx_reg[0] = reg;
  tx_reg[1] = tx_data;

  if ((HAL_I2C_Master_Transmit(&hi2c2, ISM330DHCX_I2C_ADD_H, tx_reg, size + 1, 0xffff)) != HAL_OK)
  {

  }
}

void ism330dhck_read_acc(float* rx_data)
{
  uint8_t xyz_data[6];

  //for(int i = 0; i < 6; i++)
  {
    ism330dhck_read_reg(ISM330DHCX_OUTX_L_A, &xyz_data[0], 6);
  }

#if 0
  rx_data[0] = (((int16_t)xyz_data[1]<<8)|xyz_data[0]);
  rx_data[1] = (((int16_t)xyz_data[3]<<8)|xyz_data[2]);
  rx_data[2] = (((int16_t)xyz_data[5]<<8)|xyz_data[4]);
#else
  /*
  rx_data[0] = (int16_t)(xyz_data[1]<<8)|xyz_data[0];
  rx_data[1] = (int16_t)(xyz_data[3]<<8)|xyz_data[2];
  rx_data[2] = (int16_t)(xyz_data[5]<<8)|xyz_data[4];
  */

  rx_data[0] = (int16_t)xyz_data[1];
  rx_data[0] = (rx_data[0] * 256) + (int16_t)xyz_data[0];
  rx_data[1] = (int16_t)xyz_data[3];
  rx_data[1] = (rx_data[1] * 256) + (int16_t)xyz_data[2];
  rx_data[2] = (int16_t)xyz_data[5];
  rx_data[2] = (rx_data[2] * 256) + (int16_t)xyz_data[4];
#endif

  //printf("X Acceleration: %.3f %.3f %.3f \n", rx_data[0], rx_data[1], rx_data[0]);

  printf("X Acceleration: %.3d %.3d %.3d \n", (int16_t)(xyz_data[1]<<8)|xyz_data[0], (int16_t)(xyz_data[3]<<8)|xyz_data[2], (int16_t)(xyz_data[5]<<8)|xyz_data[4]);
}

#if 0
/**
  * @brief  Linear acceleration output register. The value is expressed as a
  *         16-bit word in two's complement.[get]
  *
  * @param  ctx    Read / write interface definitions.(ptr)
  * @param  buff   Buffer that stores data read
  * @retval        Interface status (MANDATORY: return 0 -> no Error).
  *
  */
int32_t ism330dhcx_acceleration_raw_get(stmdev_ctx_t *ctx,
                                        int16_t *val)
{
  uint8_t buff[6];
  int32_t ret;
  ret = ism330dhcx_read_reg(ctx, ISM330DHCX_OUTX_L_A, buff, 6);
  val[0] = (int16_t)buff[1];
  val[0] = (val[0] * 256) + (int16_t)buff[0];
  val[1] = (int16_t)buff[3];
  val[1] = (val[1] * 256) + (int16_t)buff[2];
  val[2] = (int16_t)buff[5];
  val[2] = (val[2] * 256) + (int16_t)buff[4];

  return ret;
}
#endif
