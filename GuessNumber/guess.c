#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//���ͷ�ļ�
#include <stdlib.h>

void menu() {
	printf("1.play\n");
	printf("0.quit\n");
}
void game() {
	int number = rand() % 10 + 1;
	int Guess;
	while (1) {
		printf("������һ������ \n");
		scanf("%d", &Guess);
		if (Guess > number)
			printf("����");
		else if (Guess < number)
			printf("С��");
		else {
			printf("����");
			break;
		}
	}
}

int main()//���������������
{
	srand((unsigned int)time(NULL));
	int input;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			return 0;
		case 0:
			break;
		default:
			printf("����������\n");
		}
	} while (input);
}