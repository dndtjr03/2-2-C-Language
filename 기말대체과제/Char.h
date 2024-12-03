#pragma once
#ifndef GAME_H
#define GAME_H

// ĳ���Ϳ� ���� ũ�� ����
#define CHARACTER_WIDTH 11
#define CHARACTER_HEIGHT 7

/*
* ANSI ���� �ڵ� ��ũ��
* \033[�����ڵ�;�����ڵ�m
* => C/C++���� printf������� �� ���ڿ� ���� ����ϴ� ��ɾ�
*/ 

#define RESET_COLOR "\033[0m"		// ���� �ʱ�ȭ
#define COLOR_WHITE "\033[37m"		// ���� == �Ͼ�� (�� ĳ���� ����)
#define COLOR_RED   "\033[31m"		// ���� == ������ (�� ĳ���� ����)

// ���� ���� ��ũ��
#define SET_COLOR(color) printf(color)

// ĳ���Ϳ� ���� ����ϴ� �Լ� ����
void draw_character();
void draw_enemy();

#endif // GAME_H
