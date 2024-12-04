#include <stdio.h>
#include <string.h>
#include "Screen.h"

// �޴� ��� �Լ�
void draw_menu(int selected_option) {
    const char* option1 = (selected_option == 0) ? "���ο��" : "���ο��";
    const char* option2 = (selected_option == 1) ? "������ģ��" : "������ģ��";

    printf("===================================\n");
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("||     %s           %s       ||\n", option1, option2);
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("===================================\n");
}

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

    // �޴� ���
    draw_menu(selected_menu_option);
}
