#include <stdio.h>
#include <string.h>
#include "Char.h"

// ĳ���� ������
const char* character_sprite[7] = {
    "  ��������",
    "����������",
    "����������",
    "����������",
    "����������",
    "����      ����",
    "����      ����"
};


// ĳ���� ���� �Լ�
Character create_character(const char* name, int level, int hp, int attack, int defense, int speed) {
    Character character;
    snprintf(character.name, sizeof(character.name), "%s", name);
    character.level = level;
    character.hp = hp;
    character.attack = attack;
    character.defense = defense;
    character.speed = speed;
    return character;
}

// HP �� ��� �Լ�
void draw_hp_bar(const Character* character) {
    printf("%s (Lv. %d)\n", character->name, character->level);     //�̸��� ���� ���
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {      // HP�� *�� ���
        printf("��");
    }
    printf("\n");
}

// ĳ���� ��� (��ġ ���� ����)
void draw_character(const Character* character, int is_player, int offset_x)
{
    // HP �� ���
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {
        printf("��");
    }
    printf("\n");

    // ���� ����
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // ĳ���� ������ ���
    for (int i = 0; i < 7; i++) {
        printf("\033[%dC%s\n", offset_x, character_sprite[i]);
    }

    // ���� �ʱ�ȭ 
    printf("\033[0m");
}

