#include "pch.h"
#include "DigitalClock.h"
#include <stdio.h>
#include <Windows.h>
#include <time.h>


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
