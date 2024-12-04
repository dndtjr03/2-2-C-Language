#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>	// _kbhit() 사용
#include "Char.h"
#include "menu.h"
#include "Screen.h"
#include "Damage.h"

void main()
{
    // 콘솔 창 제목 설정
    system("mode con cols=76 | title 20212311_이웅석 기말대체과제");

    // 캐릭터 생성
    Character player = create_character("Player", 5, 20, 15, 10, 8);
    Character enemy = create_character("Enemy", 3, 15, 12, 8, 6);

    // 초기 메뉴 선택 상태 (0: 싸운다, 1: 도망친다)
    int selected_menu_option = 0;

    // 게임 루프
    while (1) {
        display_screen(&player, &enemy, selected_menu_option);

        if (kbhit()) {
            char key = getch();
            if (key == 0 || key == -32) {
                key = getch();
                if (key == 75) { // 왼쪽
                    selected_menu_option = 0;
                }
                else if (key == 77) { // 오른쪽
                    selected_menu_option = 1;
                }
            }
            else if (key == '\r') { // Enter
                if (selected_menu_option == 0) {
                    printf("\n플레이어가 적을 공격합니다!\n");
                    apply_damage(&enemy, 5); // 데미지 5 적용
                }
                else if (selected_menu_option == 1) {
                    printf("\n무사히 도망쳤습니다!\n");
                    break;
                }
            }
        }

        // 적 HP가 0이면 승리
        if (enemy.hp <= 0) {
            printf("\n적을 물리쳤습니다!\n");
            break;
        }

        // 플레이어 HP가 0이면 패배
        if (player.hp <= 0) {
            printf("\n플레이어가 패배했습니다...\n");
            break;
        }
    }

    return 0;
}
