#pragma once

#define WINDOW_LINE_SIZE 9
#define WINDOW_COL_SIZE 66

enum FontColor {
	BLACK, BLUE, GREEN, JADE, RED, PURPLE, YELLOW, WHITE, GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_JADE, LIGHT_RED, LIGHT_PURPLE, LIGHT_YELLOW, LIGHT_WHITE
};

//커서위치를 옮기는 함수
void CursorUtil_GotoXY(int x, int y);


//커서를 감추는 함수
void CursorUtil_Hide();


//ConsolWindow의 크기를 조정하는 함수
void IndowUtil_ChangeWindowSize(int lines, int cols);


//콘솔 폰트 색을 바꾸는 함수
void FontUtil_ChangeFontColor(int color);