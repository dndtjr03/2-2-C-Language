#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>	// _kbhit() ���
#include "Char.h"
#include "menu.h"
#include "Screen.h"
#include "Damage.h"

void main()
{
    // �ܼ� â ���� ����
    system("mode con cols=76 | title 20212311_�̿��� �⸻��ü����");

    // ĳ���� ����
    Character player = create_character("Player", 5, 20, 15, 10, 8);
    Character enemy = create_character("Enemy", 3, 15, 12, 8, 6);

    // �ʱ� �޴� ���� ���� (0: �ο��, 1: ����ģ��)
    int selected_menu_option = 0;

    // ���� ����
    while (1) {
        display_screen(&player, &enemy, selected_menu_option);

        if (kbhit()) {
            char key = getch();
            if (key == 0 || key == -32) {
                key = getch();
                if (key == 75) { // ����
                    selected_menu_option = 0;
                }
                else if (key == 77) { // ������
                    selected_menu_option = 1;
                }
            }
            else if (key == '\r') { // Enter
                if (selected_menu_option == 0) {
                    printf("\n�÷��̾ ���� �����մϴ�!\n");
                    apply_damage(&enemy, 5); // ������ 5 ����
                }
                else if (selected_menu_option == 1) {
                    printf("\n������ �����ƽ��ϴ�!\n");
                    break;
                }
            }
        }

        // �� HP�� 0�̸� �¸�
        if (enemy.hp <= 0) {
            printf("\n���� �����ƽ��ϴ�!\n");
            break;
        }

        // �÷��̾� HP�� 0�̸� �й�
        if (player.hp <= 0) {
            printf("\n�÷��̾ �й��߽��ϴ�...\n");
            break;
        }
    }

    return 0;
}
