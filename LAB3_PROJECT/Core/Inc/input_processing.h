/*
 * input_processing.h
 *
 *  Created on: Nov 9, 2023
 *      Author: Admin
 */

#ifndef INC_INPUT_PROCESSING_H_
#define INC_INPUT_PROCESSING_H_

#include "global.h"

#define ON		RESET
#define OFF		SET

void setAllLeds();
void offAllLeds();
void blinkingLeds();

void setRed1();
void setYellow1();
void setGreen1();

void setRed2();
void setYellow2();
void setGreen2();

#endif /* INC_INPUT_PROCESSING_H_ */
