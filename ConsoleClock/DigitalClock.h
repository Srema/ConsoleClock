#pragma once

enum {
	HOUR_LEFT,	//1
	HOUR_RIGHT,	//2
	
	DELIMITER_BETWEEN_HOUR_AND_MINUTE,	//3
	MINUTE_LEFT,	//4
	MINUTE_RIGHT,	//5
	
	DELIMITER_BETWEEN_MINUTE_AND_SECOND,	//6
	SECOND_LEFT,	//7
	SECOND_RIGHT	//8
};

//      ½Ã°£  02:05:32
//            12345678 

typedef struct _digitalClock
{
	int year;
	int month;
	int day0fMonth;
	int day0fWeek;   //sunday(0)    monday(1)   ...
	int hour;
	int minute;
	int second;
}DigitalClock;

#define ONE_SECOND 1000
#define INITIAL_X_POSITION_FOR_TIME 2
#define INITIAL_Y_POSITION_FOR_TIME 3
#define Y_OFFSET_FOR_TIME 8
#define INITIAL_X_POSITION_FOR_DATE 22
#define INITIAL_Y_POSITION_FOR_DATE 1
#define TRUE 1
#define FALSE 0

DigitalClock DigitalClock_GetTime();
void DigitalClock_print(DigitalClock DigitalClock);