#include <stdio.h>
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

// 캐릭터 출력 함수
void draw_character() {
    printf(COLOR_WHITE); // 녹색으로 설정
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        printf("%s\n", character[i]);
    }
    printf(RESET_COLOR); // 색상 초기화
}

// 적 출력 함수
void draw_enemy() {
    printf(COLOR_RED); // 빨간색으로 설정
    for (int i = 0; i < CHARACTER_HEIGHT; i++) {
        printf("%s\n", enemy[i]);
    }
    printf(RESET_COLOR); // 색상 초기화
}

