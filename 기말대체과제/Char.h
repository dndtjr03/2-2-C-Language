#pragma once


/*// ĳ���Ϳ� ���� ũ�� ����
#define CHARACTER_WIDTH 11
#define CHARACTER_HEIGHT 7

	/*
	* ANSI ���� �ڵ� ��ũ��
	* \033[�����ڵ�;�����ڵ�m
	* => C/C++���� printf������� �� ���ڿ� ���� ����ϴ� ��ɾ�
	* 

#define RESET_COLOR "\033[0m"		// ���� �ʱ�ȭ
#define COLOR_WHITE "\033[37m"		// ���� == �Ͼ�� (�� ĳ���� ����)
#define COLOR_RED   "\033[31m"		// ���� == ������ (�� ĳ���� ����)

// ���� ���� ��ũ��
#define SET_COLOR(color) printf(color)

// ĳ���Ϳ� ���� ����ϴ� �Լ� ����
void draw_character();
void draw_enemy();
*/

// ĳ���͵� ����ü ����
// �̸�, ����, ü��, �ִ� ü��, ���ݷ�, ����, ���ǵ� ����
typedef struct {
    char name[20];
    int level;
    int hp;
    int max_hp;
    int attack;
    int defense;
    int speed;
} Character;

// ĳ���Ϳ� ���� �����ϴ� �Լ�
Character create_character(const char* name, int level, int max_hp, int attack, int defense, int speed);

// ĳ���Ϳ� ���� ����ϴ� �Լ�
void draw_character(const Character* character, int is_player);