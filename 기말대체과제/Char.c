#include <stdio.h>
#include <string.h>
#include "Char.h"

// 캐릭터 디자인
const char* character_sprite[7] = {
    "  ■■■■■■■",
    "■■■■■■■■■",
    "■■□□■□□■■",
    "■■■■■■■■■",
    "■■■■■■■■■",
    "■■■      ■■■",
    "■■■      ■■■"
};


// 캐릭터 생성 함수
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

// HP 바 출력 함수
void draw_hp_bar(const Character* character) {
    printf("%s (Lv. %d)\n", character->name, character->level);     //이름과 레벨 출력
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {      // HP는 *로 출력
        printf("＊");
    }
    printf("\n");
}

// 캐릭터 출력 (위치 조정 포함)
void draw_character(const Character* character, int is_player, int offset_x)
{
    // HP 바 출력
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("HP: ");
    for (int i = 0; i < character->hp; i++) {
        printf("＊");
    }
    printf("\n");

    // 색상 설정
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // 캐릭터 디자인 출력
    for (int i = 0; i < 7; i++) {
        printf("\033[%dC%s\n", offset_x, character_sprite[i]);
    }

    // 색상 초기화 
    printf("\033[0m");
}

