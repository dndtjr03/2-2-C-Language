#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/*
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
���� ���� �߰� �� ���
*/

enum Keys
{
	LEFT = 75,		// Ű���� ���� Ű
	RIGHT = 77,		// Ű���� ������ Ű
	UP = 72,		// Ű���� �� Ű
	DOWN = 80,		// Ű���� �Ʒ� Ű
	ARROW = 224,	// Ű���� ����Ű �Ǻ�
	SPACEBAR = 32,		// Ű���� �����̽� Ű
};

// Ŀ�� ��ġ Ȯ��
// �� �Լ��� ĳ�� ��ġ ����, ȭ��ǥ ����
COORD getCursor(void);
void GotoXY(int x, int y);
void CursorView(boolean show);