#pragma once

#define WINDOW_LINE_SIZE 9
#define WINDOW_COL_SIZE 66

enum FontColor {
	BLACK, BLUE, GREEN, JADE, RED, PURPLE, YELLOW, WHITE, GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_JADE, LIGHT_RED, LIGHT_PURPLE, LIGHT_YELLOW, LIGHT_WHITE
};

//Ŀ����ġ�� �ű�� �Լ�
void CursorUtil_GotoXY(int x, int y);


//Ŀ���� ���ߴ� �Լ�
void CursorUtil_Hide();


//ConsolWindow�� ũ�⸦ �����ϴ� �Լ�
void IndowUtil_ChangeWindowSize(int lines, int cols);


//�ܼ� ��Ʈ ���� �ٲٴ� �Լ�
void FontUtil_ChangeFontColor(int color);