/*
 * input_processing.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Admin
 */


#include "input_processing.h"

//this function is used to turn on all leds
void setAllLeds() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, ON);

	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, ON);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, ON);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, ON);
}
//this function is used to blink all red leds
void blinkingRed(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin);

	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, OFF);
}

//this function is used to blink all amber leds
void blinkingAmber(){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin);

	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, OFF);
}

//this function is used to blink all green leds
void blinkingGreen(){
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin);

	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, OFF);
}

//this function is used to turn off all leds
void offAllLeds() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);

	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, OFF);
}

void setRed1() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);
}
void setYellow1() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, OFF);
}
void setGreen1() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, ON);
}

void setRed2() {
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, ON);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, OFF);
}
void setYellow2() {
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, ON);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, OFF);
}
void setGreen2() {
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, OFF);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, ON);
}
