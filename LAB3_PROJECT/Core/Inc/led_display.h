/*
 * led_display.h
 *
 *  Created on: Nov 9, 2023
 *      Author: Admin
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "global.h"

void segRun1();
void segRun2();
void display7SEG(int counter);
void update7SEG_Mode(int index, int data);
void update7SEG_Value(int index, int data);

#endif /* INC_LED_DISPLAY_H_ */
