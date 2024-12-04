#include <stdio.h>
#include <conio.h> // Windows ȯ�濡�� _getch() ���
#include "menu.h"

// �޴� ���
void display_menu(int selected_option) {
	const char* option1 = (selected_option == 0) ? "���ο��" : "���ο��";     // ��: ���õ� �޴�, ��: ���õ��� ���� �޴�
	const char* option2 = (selected_option == 1) ? "������ģ��" : "������ģ��";       // ��: ���õ� �޴�, ��: ���õ��� ���� �޴�

    printf("====================================\n");
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("||         %s           %s        ||\n", option1, option2);
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// ��ų �޴� ���
void display_skills() {
    printf("====================================\n");
    printf("||                                ||\n");
    printf("||      ����ų1   ����ų2         ||\n");
    printf("||                                ||\n");
    printf("||      ����ų3   ����ų4         ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// �޽��� ���
void display_message(const char* message) {
    printf("====================================\n");
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("||               %s               ||\n", message);
    printf("||                                ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
}

// �޴� �׺���̼� ó��
int navigate_menu() {
    int selected_option = 0; // 0: �ο��, 1: ����ģ��

    while (1) {
        // �޴� ���
        display_menu(selected_option);

        // ����Ű �Է� ó��
        int key = _getch();
        if (key == 224) { // ����Ű �Է�
            key = _getch(); // ���� ����Ű Ȯ��
            if (key == 75 && selected_option > 0) { // ���� ȭ��ǥ
                selected_option--;
            }
            else if (key == 77 && selected_option < 1) { // ������ ȭ��ǥ
                selected_option++;
            }
        }
        else if (key == 13) { // ����Ű �Է�
            return selected_option;
        }

        // �ܼ� ȭ�� �����
        system("cls");
    }
}
