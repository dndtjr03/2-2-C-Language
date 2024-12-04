#include <stdio.h>
#include "Char.h"

// ĳ���Ϳ� ���� ������ (���)
const char* character[CHARACTER_HEIGHT] = {
    "  ��������",
    "����������",
    "����������",
    "����������",
    "����������",
    "����      ����",
    "����      ����"
};

const char* enemy[CHARACTER_HEIGHT] = {
    "  ��������",
    "����������",
    "����������",
    "����������",
    "����������",
    "����      ����",
    "����      ����"

};

// ĳ���� ��� �Լ�
void draw_character() {
    printf(COLOR_WHITE); // ������� ����
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        printf("%s\n", character[i]);
    }
    printf(RESET_COLOR); // ���� �ʱ�ȭ
}

// �� ��� �Լ�
void draw_enemy() {
    printf(COLOR_RED); // ���������� ����
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        printf("%s\n", enemy[i]);
    }
    printf(RESET_COLOR); // ���� �ʱ�ȭ
}

