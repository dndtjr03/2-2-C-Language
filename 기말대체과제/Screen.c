#include <stdio.h>
#include "Screen.h"
#include "menu.h" // 메뉴 관련 함수 포함
#include "Char.c"

// 캐릭터 출력 (위치 조정 포함)
void draw_character_on_screen(const Character* character, int is_player, int offset_x) {
    // HP 바 출력
    printf("\033[%dC", offset_x); // 가로 위치 조정
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("\033[%dC", offset_x); // 가로 위치 조정
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {
        printf("＊");
    }
    printf("\n");

    // 색상 설정
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // ASCII 아트 출력
    for (int i = 0; i < 7; i++) {
        printf("\033[%dC%s\n", offset_x, character_sprite[i]);
    }

    // 색상 초기화
    printf("\033[0m");
}

// 전체 화면 출력
void display_screen(const Character* player, const Character* enemy, int selected_menu_option) {
    // Clear the screen
    system("cls");

    // 플레이어 출력 (왼쪽 정렬)
    draw_character_on_screen(player, 1, 0);

    // 적 출력 (오른쪽 정렬)
    draw_character_on_screen(enemy, 0, 40);

    // 줄바꿈으로 캐릭터와 메뉴 구분
    printf("\n\n");

    // 메뉴 출력 (menu.c의 draw_menu 함수 호출)
    draw_menu(selected_menu_option);
}
