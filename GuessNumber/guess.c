#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//添加头文件
#include <stdlib.h>

void menu() {
	printf("1.play\n");
	printf("0.quit\n");
}
void game() {
	int number = rand() % 10 + 1;
	int Guess;
	while (1) {
		printf("请输入一个数： \n");
		scanf("%d", &Guess);
		if (Guess > number)
			printf("大了");
		else if (Guess < number)
			printf("小了");
		else {
			printf("对了");
			break;
		}
	}
}

int main()//主函数，函数入口
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
			printf("请重新输入\n");
		}
	} while (input);
}