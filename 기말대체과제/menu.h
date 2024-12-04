#pragma once

// 메뉴 프레임 크기 정의
#define MENU_WIDTH 35
#define MENU_HEIGHT 7

// 메뉴 출력 및 입력 함수 선언
void draw_menu(int selected_option);
void display_skills();
void display_message(const char* message);
int navigate_menu();
