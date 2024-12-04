#pragma once
#include "Char.h"

// 화면에 캐릭터와 메뉴를 동시에 출력하는 함수

// 콘솔창에 캐릭터와 메뉴를 동시에 출력하는 함수
void display_screen(const Character* player, const Character* enemy, int selected_menu_option);
void draw_character(const Character* character, int is_player, int offset_x); // 함수 선언 추가
