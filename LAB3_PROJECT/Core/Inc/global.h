/*
 * global.h
 *
 *  Created on: Nov 24, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "timer.h"
#include "input_spec.h"
#include "input_processing.h"
#include "input_reading.h"
#include "input_control.h"
#include "led_display.h"

#define TIMER_CYCLE		10

#define MODE_0_7SEG		111
#define MODE_1_7SEG		112
#define VALUE_0_7SEG	222
#define VALUE_1_7SEG	223

#define YELLOW_TIME		2
#define GREEN_TIME		3
#define RED_TIME		5

#define INIT 			0
#define MODE1			1
#define MODE2 			2
#define MODE3	 		3
#define MODE4			4

#define NUM_OF_MODES	4

extern int redTime;
extern int yellowTime;
extern int greenTime;
extern int ledModeData;
extern int ledValueData;

extern int mode;
extern int state;

void initValues();

#endif /* INC_GLOBAL_H_ */
