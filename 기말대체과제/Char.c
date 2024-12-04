#include <stdio.h>
#include <string.h>
#include "Char.h"

// 캐릭터와 적의 데이터 (행렬)
const char* character[CHARACTER_HEIGHT] = {
    "  ■■■■■■■",
    "■■■■■■■■■",
    "■■□□■□□■■",
    "■■■■■■■■■",
    "■■■■■■■■■",
    "■■■      ■■■",
    "■■■      ■■■"
};

const char* enemy[CHARACTER_HEIGHT] = {
    "  ■■■■■■■",
    "■■■■■■■■■",
    "■■□□■□□■■",
    "■■■■■■■■■",
    "■■■■■■■■■",
    "■■■      ■■■",
    "■■■      ■■■"

};

// 캐릭터 생성 함수
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

// HP 바 출력 함수
void draw_hp_bar(const Character* character)
{
    printf("%s (Lv. %d)\n", character->name, character->level);
    printf("HP: ");
    for (int i = 0; i < character->hp; i++)
    {
        printf("＊");
    }
    printf("\n");
}

// 캐릭터 출력 함수
void draw_character(const Character* character, int is_player)
{
    // HP 바 출력
    draw_hp_bar(character);

    // 색상 설정 (플레이어: 하얀색, 적: 빨간색)
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

    // 색상 초기화
    printf("\033[0m");
}

