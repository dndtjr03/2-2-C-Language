#include <stdio.h>
#include <windows.h> // Sleep �Լ� ���
#include "Damage.h"

// ������ ����
void apply_damage(Character* target, int damage) {
    if (damage <= 0) return;

    // ���� HP ���
    target->hp -= damage;
    if (target->hp < 0) {
        target->hp = 0; // HP�� ������ �� �� ����
    }

    // ������ ǥ��
    display_damage(target, damage);
}

// ������ ���
void display_damage(const Character* target, int damage) {
    printf("%s (Lv. %d): -%d HP\n", target->name, target->level, damage);

    // ĳ���� ���� ������ ���
    for (int i = 0; i < 3; i++) {
        printf("\033[31m- %d\033[0m\n", damage); // ���������� ������ ǥ��
        Sleep(300); // ��� ���
    }

    // HP �����
    draw_character(target);
}
