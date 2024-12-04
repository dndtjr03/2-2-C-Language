#include <stdio.h>
#include "Screen.h"
#include "menu.h" // �޴� ���� �Լ� ����
#include "Char.c"

// ĳ���� ��� (��ġ ���� ����)
void draw_character_on_screen(const Character* character, int is_player, int offset_x) {
    // HP �� ���
    printf("\033[%dC", offset_x); // ���� ��ġ ����
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("\033[%dC", offset_x); // ���� ��ġ ����
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {
        printf("��");
    }
    printf("\n");

    // ���� ����
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // ASCII ��Ʈ ���
    for (int i = 0; i < 7; i++) {
        printf("\033[%dC%s\n", offset_x, character_sprite[i]);
    }

    // ���� �ʱ�ȭ
    printf("\033[0m");
}

// ��ü ȭ�� ���
void display_screen(const Character* player, const Character* enemy, int selected_menu_option) {
    // Clear the screen
    system("cls");

    // �÷��̾� ��� (���� ����)
    draw_character_on_screen(player, 1, 0);

    // �� ��� (������ ����)
    draw_character_on_screen(enemy, 0, 40);

    // �ٹٲ����� ĳ���Ϳ� �޴� ����
    printf("\n\n");

    // �޴� ��� (menu.c�� draw_menu �Լ� ȣ��)
    draw_menu(selected_menu_option);
}
