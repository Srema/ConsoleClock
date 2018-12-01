#include "pch.h"
#include "DigitalClock.h"
#include <stdio.h>
#include <Windows.h>
#include <time.h>

#define DAY_0F_WEEK_SIZE 7

const static char* DAY_0F_WEEK[DYA_0F_WEEK_SIZE] = {
	"Sum", "Mon", "Tue", "Wed", "Thu","Fri", "Sat"
};

#define PATTERNS_TO_PRINT_LENGHT 11
#define PATTERNS_TO_PRINT_ROW 5
#define PATTERNS_TO_PRINT_COL 3

const static char
	patternsToPrint
	[PATTERNS_TO_PRINT_LENGHT]
[PATTERNS_TO_PRINT_ROW][PATTERNS_TO_PRINT_COL] = {
	{
		{1,1,1},
		{1,0,1},
		{1,0,1},
		{1,0,1},
		{1,1,1}
},	
{
	{0,1,0},
	{0,1,0},
	{0,1,0},
	{0,1,0},
	{0,1,0}
},
{
	{1,1,1},
	{0,0,1},
	{1,1,1},
	{1,0,0},
	{1,1,1}
},
{
	{1,1,1},
	{0,0,1},
	{1,1,1},
	{0,0,1},
	{1,1,1}
},
{
	{1,0,1},
	{1,0,1},
	{1,1,1},
	{0,0,1},
	{0,0,1}
},
{
	{1,1,1},
	{1,0,0},
	{1,1,1},
	{0,0,1},
	{1,1,1}
},
{
	{1,1,1},
	{1,0,0},
	{1,1,1},
	{1,0,1},
	{1,1,1}
},
{
	{1,1,1},
	{1,0,1},
	{0,0,1},
	{0,0,1},
	{0,0,1}
},
{
	{1,1,1},
	{1,0,1},
	{1,1,1},
	{1,0,1},
	{1,0,1}
},
{
	{1,1,1},
	{1,0,1},
	{1,1,1},
	{0,0,1},
	{0,0,1}
},
{
	{0,0,0},
	{0,1,0},
	{0,0,0},
	{0,1,0},
	{0,0,0}
}

};

DigitalClock DigitalClock_GetTime()
{
	time_t now = time(NULL);
	struct tm time;
	localtime_s(&time, &now);

	printf("%04d-%02d-%02d %02d:%02d:%02d", time.tm_year + 1900, time.tm_mon + 1, time.tm_mday, time.tm_hour, time.tm_min, time.tm_sec);

	DigitalClock dgc = { 0, };
	dgc.year = time.tm_year + 1900;
	dgc.month = time.tm_mon + 1;
	dgc.day0fMonth = time.tm_mday;
	dgc.day0fWeek = time.tm_wday;
	dgc.hour = time.tm_hour;
	dgc.minute = time.tm_min;
	dgc.second = time.tm_sec;

	return dgc;
}

void DigitalClock_Print(DigitalClock digitalClock) {
	_DigitalClock_PrintDate(digitalClock);
	_DigitalClock_PrintTime(digitalClock);
	Sleep(ONE_SECOND - 20);
}

static void _DigitlaClock_printDate(DigitalClock digitalClock) {
	CursorUtil_GotoXY(INITIAL_X_POSITION_FOR_DATE, INITIAL_Y_POSITION_FOR_DATE);
	printf("%d. %d. %d (%s)\n", digitalClock.year, digitalClock.month, digitalClock.day0fMonth, DAY_0F_WEEK[digitalClock.day0fWeek]);
}

static void _DigitalClock_PrintTime(DigitalClock digitlaClock) {
	_PrintPattern(digitalClock.hour / 10, HOUR_LEFT);
	_PrintPattern(digitlaClock.hour % 10, HOUR_RIGHT);
	_PrintPattern(':', DELIMITER_BETWEEN_HOUR_AND_MINUTE);
	_PrintPattern(digitalClock.minute / 10, MINUTE_LEFT);
	_PrintPattern(digitalClock.minute % 10, MINUTE_RIGHT);
	_PrintPattern(':', DELIMITER_BETWEEN_MINUTE_AND_SECOND);
	_PrintPattern(digitalClock.second / 10, SECOND_LEFT);
	_PrintPattern(digitalClock.second % 10, SECOND_RIGHT);
}

static void _PrintPattern(int pattern, int type){}