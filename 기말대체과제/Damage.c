#include <stdio.h>
#include <windows.h> // Sleep 함수 사용
#include "Damage.h"

// 데미지 적용
void apply_damage(Character* target, int damage) {
    if (damage <= 0) return;

    // 남은 HP 계산
    target->hp -= damage;
    if (target->hp < 0) {
        target->hp = 0; // HP는 음수가 될 수 없음
    }

    // 데미지 표시
    display_damage(target, damage);
}

// 데미지 출력
void display_damage(const Character* target, int damage) {
    printf("%s (Lv. %d): -%d HP\n", target->name, target->level, damage);

    // 캐릭터 위에 데미지 출력
    for (int i = 0; i < 3; i++) {
        printf("\033[31m- %d\033[0m\n", damage); // 빨간색으로 데미지 표시
        Sleep(300); // 잠시 대기
    }

    // HP 재출력
    draw_character(target);
}
