#pragma once
#include "Char.h"

// ȭ�鿡 ĳ���Ϳ� �޴��� ���ÿ� ����ϴ� �Լ�

// �ܼ�â�� ĳ���Ϳ� �޴��� ���ÿ� ����ϴ� �Լ�
void display_screen(const Character* player, const Character* enemy, int selected_menu_option);
void draw_character(const Character* character, int is_player, int offset_x); // �Լ� ���� �߰�
