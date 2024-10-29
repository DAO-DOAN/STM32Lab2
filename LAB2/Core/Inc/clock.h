/*
 * clock.h
 *
 *  Created on: Oct 29, 2024
 *      Author: Legion 5
 */

#ifndef INC_CLOCK_H_
#define INC_CLOCK_H_

#include "main.h"
extern int hour,minute,second;
extern int index_led;
extern int led_buffer[4];
void update7SEG(int index);
void updateClockBuffer();

#endif /* INC_CLOCK_H_ */
