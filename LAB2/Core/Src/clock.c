/*
 * clock.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Legion 5
 */

#include "clock.h"
#include "seg7.h"

const int MAX_LED = 4;
int hour = 15, minute = 8 ,second =50;
int index_led = 0;
int led_buffer[4] = {1 , 2 , 3 , 4};
void update7SEG ( int index ) {
	switch ( index ) {
		case 0:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[0]);
// Display the first 7 SEG with led_buffer [0]
			break ;
		case 1:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[1]);
// Display the second 7 SEG with led_buffer [1]
			break ;
		case 2:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			display7SEG(led_buffer[2]);
// Display the third 7 SEG with led_buffer [2]
			break ;
		case 3:
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			display7SEG(led_buffer[3]);
// Display the forth 7 SEG with led_buffer [3]
			break ;
		default :
			break ;
	}
}

void updateClockBuffer(){
		led_buffer[0]=hour/10;
		led_buffer[1]=hour%10;
		led_buffer[2]=minute/10;
		led_buffer[3]=minute%10;
}
