/*
 * ism330dhcx_sensor.h
 *
 *  Created on: Aug 21, 2023
 *      Author: grand
 */

#ifndef INC_ISM330DHCX_SENSOR_H_
#define INC_ISM330DHCX_SENSOR_H_

#include "ism330dhcx_reg.h"
#include "main.h"

extern int  is_accel_data_ready(void);
extern void ism330dhcx_init(void);
extern void ism330dhck_read_acc(float* rx_data);

#endif /* INC_ISM330DHCX_SENSOR_H_ */
