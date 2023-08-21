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

  ism330dhck_read_acc(rx_buf);

  int16_t x,y,z;

  x = (int16_t)(((uint16_t)rx_buf[1]<<8)|(uint16_t)rx_buf[0]);
  y = (int16_t)(((uint16_t)rx_buf[3]<<8)|(uint16_t)rx_buf[2]);
  z = (int16_t)(((uint16_t)rx_buf[5]<<8)|(uint16_t)rx_buf[4]);

  printf("X Acceleration: %.3f %.3f %.3f \n", (float)x, (float)y, (float)z);

  printf("ism330dhcx_sensor init done\r\n");
}

void ism330dhck_read_reg(uint8_t reg, uint8_t *rx_data, uint16_t size)
{
  uint8_t read_reg = reg;
  if ((HAL_I2C_Master_Transmit(&hi2c2, ISM330DHCX_I2C_ADD_H, &read_reg, size, 0xffff)) != HAL_OK)
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

void ism330dhck_read_acc(uint8_t* rx_data)
{
  for(int i = 0; i < 6; i++)
  {
    ism330dhck_read_reg(ISM330DHCX_OUTX_L_A+i, &rx_data[i], 1);
  }

  int16_t x,y,z;

  x = (int16_t)(((uint16_t)rx_data[1]<<8)|(uint16_t)rx_data[0]);
  y = (int16_t)(((uint16_t)rx_data[3]<<8)|(uint16_t)rx_data[2]);
  z = (int16_t)(((uint16_t)rx_data[5]<<8)|(uint16_t)rx_data[4]);

  printf("X Acceleration: %.3f %.3f %.3f \n", (float)x, (float)y, (float)z);
}

/*
#define ISM330DHCX_OUTX_L_A                     0x28U
#define ISM330DHCX_OUTX_H_A                     0x29U
#define ISM330DHCX_OUTY_L_A                     0x2AU
#define ISM330DHCX_OUTY_H_A                     0x2BU
#define ISM330DHCX_OUTZ_L_A                     0x2CU
#define ISM330DHCX_OUTZ_H_A                     0x2DU
*/
