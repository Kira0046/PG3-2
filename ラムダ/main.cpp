#include <stdio.h>
#include <functional>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(int argc,const char *argv[]) {
	srand(time(nullptr));

	printf("�:1�L�[ ����:2�L�[\n");

	int input;
	scanf_s("%d", &input);
	if (input > 2) {
		printf("�ǂ�����I������Ă��܂���");
		return 0;
	}

	int result;
	result = input % 2;
	
	Sleep(3 * 1000);

	std::function<int(int)> dice = [](int i) {return i % 6 + 1; };
	int diceresult = dice(rand());
	printf("��������̖�:%d\n", diceresult);

	auto jugde = [](int i) {return i % 2; };
	if (jugde(diceresult) == result) {
		printf("������!");
	}

	if (jugde(diceresult) != result) {
		printf("�͂���");
	}

	return 0;
}