#include <stdio.h>
#include <string.h>
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

// ĳ���� ���� �Լ�
Character create_character(const char* name, int level, int max_hp, int attack, int defense, int speed) 
{
    Character character;
    strncpy(character.name, name, sizeof(character.name) - 1);
    character.name[sizeof(character.name) - 1] = '\0';
    character.level = level;
    character.hp = max_hp;
    character.max_hp = max_hp;
    character.attack = attack;
    character.defense = defense;
    character.speed = speed;
    return character;
}

// HP �� ��� �Լ�
void draw_hp_bar(const Character* character)
{
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("HP: ");
    for (int i = 0; i < character->hp; i++)
    {
        printf("��");
    }
    printf("\n");
}

// ĳ���� ��� �Լ�
void draw_character(const Character* character, int is_player)
{
    // HP �� ���
    draw_hp_bar(character);

    // ���� ���� (�÷��̾�: �Ͼ��, ��: ������)
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // ���� �ʱ�ȭ
    printf("\033[0m");
}

