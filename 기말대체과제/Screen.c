#include <stdio.h>
#include <string.h>
#include "Screen.h"
#include "menu.h" // 메뉴 관련 함수 포함


// 전체 화면 출력
void display_screen(const Character* player, const Character* enemy, int selected_menu_option) {
    // Clear 스크린
    system("cls");

    // 플레이어 출력 (왼쪽 정렬)
    draw_character(player, 1, 0);

    // 적 출력 (오른쪽 정렬)
    draw_character(enemy, 0, 40);

    // 줄바꿈으로 캐릭터와 메뉴 구분
    printf("\n\n");

    // 메뉴 출력 (menu.c의 draw_menu 함수 호출)
    draw_menu(selected_menu_option);
}
