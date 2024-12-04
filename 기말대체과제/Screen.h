#pragma once
#include "Char.h"
#include "menu.h"

// 콘솔창에 캐릭터와 메뉴를 동시에 출력하는 함수
void display_screen(const Character* player, const Character* enemy, int selected_menu_option);
