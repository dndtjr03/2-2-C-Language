#pragma once
#ifndef GAME_H
#define GAME_H

// 캐릭터와 적의 크기 정의
#define CHARACTER_WIDTH 11
#define CHARACTER_HEIGHT 7

/*
* ANSI 색상 코드 매크로
* \033[색상코드;색상코드m
* => C/C++에서 printf사용했을 때 문자열 색상 출력하는 명령어
*/ 

#define RESET_COLOR "\033[0m"		// 색상 초기화
#define COLOR_WHITE "\033[37m"		// 색상 == 하얀색 (내 캐랙터 색상)
#define COLOR_RED   "\033[31m"		// 색상 == 빨간색 (적 캐릭터 색상)

// 색상 설정 매크로
#define SET_COLOR(color) printf(color)

// 캐릭터와 적을 출력하는 함수 선언
void draw_character();
void draw_enemy();

#endif // GAME_H
