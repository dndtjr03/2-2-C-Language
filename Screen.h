#pragma once
#include "Blocks.h"
#include "Controller.h"

//����
typedef enum Color
{
	BLACK,		// 0
	DARK_BLUE,	// 1
	DARK_GREEN,	// 2
	DARK_SKYBLUE,// 3
	DARK_RED,	// 4
	DARK_VIOLET,// 5
	DARK_YELLOW,// 6
	GRAY,		// 7
	DARK_GRAY,	// 8
	BLUE,		// 9
	GREEN,		// 10
	SKYBLUE,	// 11
	RED,		// 12
	VIOLET,		// 13
	YELLOW,		// 14
	WHITE,		// 15
}COLOR;

int static level;

// �ι�° ���� Scene
void InGameFrame();
// ���ӿ��� ��µ� ���� ���� �̸�����!
void ShowNextBlock();
// ���ӿ��� ��µ� ���� ���� �̸����� ����.
void DeleteNextBlock();
// �̸� ������ ������ �迭�� ����.
int NextBlock[6][6];	// nextshape
int static Rotation = 0;

void EndGameFrame();
void GameTitle();

/**
* Controller.c �ҽ������� tetris_process()�޼��忡��
* ��Ʈ���� ���� �� ���� ������ ��� "addBlock(shape, rotate)">"�ǰ�,
* �� ĭ �������� ���� ��µ� ������ ����<deleteBlock()> ��
* y�� ������ ���·� (������ ����) ���� ���� �ٽ� ���!<addBlock(shape, rotate)
* ������ ���, �����ϴ� �Լ�
*/
void addBlock(int shape, int rotate);
void deleteBlock();

// ���� ����. 0�� 1�� ����. 1 = ��, 0 = �����. �ڼ��ϰԴ� blockFixed()�޼��� �ּ� ����.
void createBoards();
int board[BoardHeight][BoardWidth];
void printBoard();
// ���Ͽ� �÷��� �ֱ� ���� textcolor����
void textcolor(int color_number);