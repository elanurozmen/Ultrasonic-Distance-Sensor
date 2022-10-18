/*
 * A01NYUB.c
 *
 *  Created on: 22 Eyl 2022
 *      Author: Elanur
 */
#include "A01NYUB.h"
#include <stdint.h>
uint8_t rxData[4];
uint32_t dist;
uint32_t Calculations(void){
	uint8_t checkSum = 0;
	uint32_t distance = 0;
	checkSum = (rxData[0] + rxData[1] + rxData[2]) & 0x00FF;
	if(checkSum == rxData[3]){
	distance = (rxData[1] << 8) + (rxData[2]);
	if(distance < 280) distance = 0;
	if(distance > 7500) distance = 7500;
	}
	else{
	}
	return distance;
}
