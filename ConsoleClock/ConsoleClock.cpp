// ConsoleClock.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "pch.h"
#include <iostream>
#include "util.h"


int main()
{
	CursorUtil_GotoXY(50, 10);
	printf("Hello World!\n");
	CursorUtil_Hide();
}
