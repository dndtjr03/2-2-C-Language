#include <stdio.h>
#include <conio.h>	//kbhit()���
#include "Char.h"
#include "menu.h"
#include "Screen.h"

void main()
{
    // �ܼ� â ���� ����
	system("mode con cols = 76 | title 20212311_�̿��� �⸻��ü����");
	
     // ĳ���� ����
    Character player = create_character("Player", 5, 20, 15, 10, 8);
    Character enemy = create_character("Enemy", 3, 15, 12, 8, 6);

    // �ʱ� �޴� ���� ���� (0: �ο��, 1: ����ģ��)
    int selected_menu_option = 0;

    // ���� ����
    while (1) {
        // ȭ�� ���
        display_screen(&player, &enemy, selected_menu_option);

        // Ű �Է� ���
        while (!kbhit()) {
            // �񵿱������� Ű �Է��� ��ٸ��鼭 �ٸ� �۾� ����
        }

        // Ű �Է� ó��
        char key = getch(); // Ű���� �Է� �б�
        if (key == 0 || key == -32) { // ����Ű �Է� ó��
            key = getch();
            if (key == 75) { // ���� ����Ű
                selected_menu_option = 0; // �ο�� ����
            }
            else if (key == 77) { // ������ ����Ű
                selected_menu_option = 1; // ����ģ�� ����
            }
        }
        else if (key == '\r') { // Enter Ű �Է�
            if (selected_menu_option == 0) {
                // "�ο��" ���� ��
                printf("\n��ų�� �����ϼ���: (��ų1, ��ų2, ��ų3, ��ų4)\n");
                break; // ������ ���� ó��
            }
            else if (selected_menu_option == 1) {
                // "����ģ��" ���� ��
                printf("\n������ �����ƴ�!\n");
                break; // ������ ���� ó��
            }
        }
    }

    return 0;
}
