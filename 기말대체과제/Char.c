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
Character create_character(const char* name, int level, int max_hp, int attack, int defense, int speed) {
    Character character;
    strncpy(character.name, name, sizeof(character.name) - 1);  //Player와 Enemy 출력 위함. 추후에 Player 이름 설정 가능하게
    character.name[sizeof(character.name) - 1] = '\0';
    character.level = level;    // 추후 설정 예정
	character.hp = max_hp;      // 기본적으로 체력은 최대 체력과 동일
	//단, 전투로 인한 체력 감소는 이후에 처리
	character.max_hp = max_hp;  // 최대 체력
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
<<<<<<< HEAD
void draw_character(const Character* character, int is_player) {
=======
void draw_character(const Character* character, int is_player)
{
>>>>>>> 50ae63ac8b81c03893b12e15a27d9eff5e6328f7
    // HP 바 출력
    draw_hp_bar(character);

    // 색상 설정 (플레이어: 하얀색, 적: 빨간색)
    const char* color = is_player ? "\033[37m" : "\033[31m";
    printf("%s", color);

<<<<<<< HEAD
    // 캐릭터 디자인 출력
    for (int i = 0; i < 7; i++) {
        printf("%s\n", character_sprite[i]);
    }

=======
>>>>>>> 50ae63ac8b81c03893b12e15a27d9eff5e6328f7
    // 색상 초기화
    printf("\033[0m");
}

