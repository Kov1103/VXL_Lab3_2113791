/*
 * timer.c
 *
 *  Created on: Nov 9, 2023
 *      Author: Admin
 */


# include "main.h"
# include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
  if(htim -> Instance == TIM2 ){
    button_reading ();
  }
}
