#include <stdio.h>
#include <conio.h> // Windows 환경에서 _getch() 사용
#include "menu.h"

// 메뉴 출력
void display_menu(int selected_option) {
	const char* option1 = (selected_option == 0) ? "▶싸운다" : "▷싸운다";     // ▶: 선택된 메뉴, ▷: 선택되지 않은 메뉴
	const char* option2 = (selected_option == 1) ? "▶도망친다" : "▷도망친다";       // ▶: 선택된 메뉴, ▷: 선택되지 않은 메뉴

    printf("====================================\n");
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("||         %s           %s        ||\n", option1, option2);
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// 스킬 메뉴 출력
void display_skills() {
    printf("====================================\n");
    printf("||                                ||\n");
    printf("||      ▶스킬1   ▶스킬2         ||\n");
    printf("||                                ||\n");
    printf("||      ▶스킬3   ▶스킬4         ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// 메시지 출력
void display_message(const char* message) {
    printf("====================================\n");
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("||               %s               ||\n", message);
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// 메뉴 네비게이션 처리
int navigate_menu() {
    int selected_option = 0; // 0: 싸운다, 1: 도망친다

    while (1) {
        // 메뉴 출력
        display_menu(selected_option);

        // 방향키 입력 처리
        int key = _getch();
        if (key == 224) { // 방향키 입력
            key = _getch(); // 실제 방향키 확인
            if (key == 75 && selected_option > 0) { // 왼쪽 화살표
                selected_option--;
            }
            else if (key == 77 && selected_option < 1) { // 오른쪽 화살표
                selected_option++;
            }
        }
        else if (key == 13) { // 엔터키 입력
            return selected_option;
        }

        // 콘솔 화면 지우기
        system("cls");
    }
}
