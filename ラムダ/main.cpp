#include <stdio.h>
#include <functional>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(int argc,const char *argv[]) {
	srand(time(nullptr));

	printf("奇数:1キー 偶数:2キー\n");

	int input;
	scanf_s("%d", &input);
	if (input > 2) {
		printf("どちらも選択されていません");
		return 0;
	}

	int result;
	result = input % 2;
	
	Sleep(3 * 1000);

	std::function<int(int)> dice = [](int i) {return i % 6 + 1; };
	int diceresult = dice(rand());
	printf("さいころの目:%d\n", diceresult);

	auto jugde = [](int i) {return i % 2; };
	if (jugde(diceresult) == result) {
		printf("あたり!");
	}

	if (jugde(diceresult) != result) {
		printf("はずれ");
	}

	return 0;
}