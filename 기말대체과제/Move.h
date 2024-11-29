#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

/*
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
음악 파일 추가 시 사용
*/

enum Keys
{
	LEFT = 75,		// 키보드 왼쪽 키
	RIGHT = 77,		// 키보드 오른쪽 키
	UP = 72,		// 키보드 위 키
	DOWN = 80,		// 키보드 아래 키
	ARROW = 224,	// 키보드 방향키 판별
	SPACEBAR = 32,		// 키보드 스페이스 키
};

// 커서 위치 확인
// 이 함수로 캐릭 위치 조정, 화살표 조정
COORD getCursor(void);
void GotoXY(int x, int y);
void CursorView(boolean show);