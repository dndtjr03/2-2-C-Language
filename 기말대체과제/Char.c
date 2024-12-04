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
Character create_character(const char* name, int level, int max_hp, int attack, int defense, int speed) {
    Character character;
    strncpy(character.name, name, sizeof(character.name) - 1);  //Player�� Enemy ��� ����. ���Ŀ� Player �̸� ���� �����ϰ�
    character.name[sizeof(character.name) - 1] = '\0';
    character.level = level;    // ���� ���� ����
	character.hp = max_hp;      // �⺻������ ü���� �ִ� ü�°� ����
	//��, ������ ���� ü�� ���Ҵ� ���Ŀ� ó��
	character.max_hp = max_hp;  // �ִ� ü��
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

// ĳ���� ��� �Լ�
void draw_character(const Character* character, int is_player) {
    // HP �� ���
    draw_hp_bar(character);

    // ���� ���� (�÷��̾�: �Ͼ��, ��: ������)
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // ĳ���� ������ ���
    for (int i = 0; i < 7; i++) {
        printf("%s\n", character_sprite[i]);
    }

    // ���� �ʱ�ȭ
    printf("\033[0m");
}

