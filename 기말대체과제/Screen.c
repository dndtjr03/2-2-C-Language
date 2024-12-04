#include <stdio.h>
#include <string.h>
#include "Screen.h"
#include "menu.h" // �޴� ���� �Լ� ����


// ��ü ȭ�� ���
void display_screen(const Character* player, const Character* enemy, int selected_menu_option) {
    // Clear ��ũ��
    system("cls");

    // �÷��̾� ��� (���� ����)
    draw_character(player, 1, 0);

    // �� ��� (������ ����)
    draw_character(enemy, 0, 40);

    // �ٹٲ����� ĳ���Ϳ� �޴� ����
    printf("\n\n");

    // �޴� ��� (menu.c�� draw_menu �Լ� ȣ��)
    draw_menu(selected_menu_option);
}
