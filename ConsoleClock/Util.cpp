#include "pch.h"

#include <Windows.h>			//Console관련 함수를 활용하기 위하여
#include <stdio.h>
#include "Util.h"

void CursorUtil_GotoXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
}

void CursorUtil_Hide()
{

	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}



