/*
 * software_timer.c
 *
 *  Created on: Oct 9, 2024
 *      Author: Legion 5
 */

#include "software_timer.h"

int timer1_flag=0;
int timer1_counter=0;

int timer2_flag=0;
int timer2_counter=0;

void setTimer1(int duration){
	timer1_flag=0;
	timer1_counter=duration;
}

void setTimer2(int duration){
	timer2_flag=0;
	timer2_counter=duration;
}

void timerRun(){
	if (timer1_counter>0){
		timer1_counter--;
		if (timer1_counter<=0){
			timer1_flag=1;
		}
	}
	if (timer2_counter>0){
		timer2_counter--;
		if (timer2_counter<=0){
			timer2_flag=1;
		}
	}
}
