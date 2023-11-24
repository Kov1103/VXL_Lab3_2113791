/*
 * input.c
 *
 *  Created on: Nov 24, 2023
 *      Author: Admin
 */


#include "input_spec.h"

void mode1Run() {
	switch (state) {
	case init:
		setTimer1(greenTime * 1000);
		ledModeData = redTime;
		ledValueData = greenTime;
		setRed1();
		setGreen2();
		state = state1;
		break;
	case state1:
		if (timer1_flag == 1) {
			setTimer1(yellowTime * 1000);
			setYellow2();
			ledValueData = yellowTime;
			state = state2;
		}
		break;
	case state2:
		if (timer1_flag == 1) {
			setTimer1(greenTime * 1000);
			setGreen1();
			setRed2();
			ledModeData = greenTime;
			ledValueData = redTime;
			state = state3;
		}
		break;
	case state3:
		if (timer1_flag == 1) {
			setTimer1(yellowTime * 1000);
			setYellow1();
			ledModeData = yellowTime;
			state = state4;
		}
		break;
	case state4:
		if (timer1_flag == 1) {
			setTimer1(greenTime * 1000);
			setRed1();
			setGreen2();
			ledModeData = redTime;
			ledValueData = greenTime;
			state = state1;
		}
		break;
	default:
		break;
	}
}
