#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef void (*PFunc)(int *);

void callback1(int *a) {

	printf("さいころの目:%d あたり!",*a);
}

void callback2(int* a) {

	printf("さいころの目:%d はずれ",*a);
}


void setTimeoutjudge(PFunc p, int second,int result,int dice) {

	Sleep(second * 1000);

	dice = dice % 6 + 1;

	int judge = dice % 2;

	if (result == judge) {
		p(&dice);
	}
	if (result != judge) {
		p = callback2;
		p(&dice);
	}
}

int main() {
	printf("奇数:1キー 偶数:2キー\n");

	int input;
	scanf_s("%d", &input);
	if (input > 2) {
		printf("どちらも選択されていません");
		return 0;
	}

	int result;
	result = input % 2;

	srand(time(nullptr));

	PFunc p;
	p = callback1;
	setTimeoutjudge(p, 3,result,rand());


	return 0;
}