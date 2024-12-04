#include <stdio.h>
#include <conio.h>	//kbhit()사용
#include "Char.h"
#include "menu.h"
#include "Screen.h"

void main()
{
    // 콘솔 창 제목 설정
	system("mode con cols = 76 | title 20212311_이웅석 기말대체과제");
	
     // 캐릭터 생성
    Character player = create_character("Player", 5, 20, 15, 10, 8);
    Character enemy = create_character("Enemy", 3, 15, 12, 8, 6);

    // 초기 메뉴 선택 상태 (0: 싸운다, 1: 도망친다)
    int selected_menu_option = 0;

    // 게임 루프
    while (1) {
        // 화면 출력
        display_screen(&player, &enemy, selected_menu_option);

        // 키 입력 대기
        while (!kbhit()) {
            // 비동기적으로 키 입력을 기다리면서 다른 작업 가능
        }

        // 키 입력 처리
        char key = getch(); // 키보드 입력 읽기
        if (key == 0 || key == -32) { // 방향키 입력 처리
            key = getch();
            if (key == 75) { // 왼쪽 방향키
                selected_menu_option = 0; // 싸운다 선택
            }
            else if (key == 77) { // 오른쪽 방향키
                selected_menu_option = 1; // 도망친다 선택
            }
        }
        else if (key == '\r') { // Enter 키 입력
            if (selected_menu_option == 0) {
                // "싸운다" 선택 시
                printf("\n스킬을 선택하세요: (스킬1, 스킬2, 스킬3, 스킬4)\n");
                break; // 간단한 종료 처리
            }
            else if (selected_menu_option == 1) {
                // "도망친다" 선택 시
                printf("\n무사히 도망쳤다!\n");
                break; // 간단한 종료 처리
            }
        }
    }

    return 0;
}
