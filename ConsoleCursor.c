#include "ConsoleCursor.h"

/**
* �ܼ�â���� Ŀ���� ���ϴ� ��ǥ�� �̵�.
* ���ڰ� x, y�� ��ġ�� Ŀ���� �̵�.
*/
void GotoXY(int x, int y)	//Ŀ���� ���ϰ��� �ϴ� ��ǥ�� �̵�
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

/**
* getCursor() ��ȯ���� COORD �ڷ����� Pos�����ε�,
* COORD�� ���� ��ŷ�� ����, ���� x, y���� ���� ����ü.
* ���� Pos�� ��ȯ�Ѵٴ� ���� GetStdHandle�� ���ؼ�
* �ܼ�â���� ��ġ�ϴ� Ŀ���� ��ǥ x, y�� ����ü COORD�� Pos�� ���� ����.
* �׸��� �ܼ�â���� ��µǰ� �ִ� ���� Ŀ�� ��ġ�� ��ȯ�Ѵ�.
*/
COORD getCursor(void)	// ���� Ŀ�� ��ġ ��ȯ
{
	COORD Pos;
	CONSOLE_SCREEN_BUFFER_INFO curInfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
	Pos.X = curInfo.dwCursorPosition.X;
	Pos.Y = curInfo.dwCursorPosition.Y;
	return Pos;
}

/**
* CursorView(boolean show)
* ���ڰ��� ���� Ŀ���� �����̴°� ��������, ��������
* CursorInfo�� �����ִ� �Լ�
*/
void CursorView(boolean show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 10;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}