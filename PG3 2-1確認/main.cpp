#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list<const char *> station{"���","�i��","�c��","�l����","�V��","�L�y��","����","�_�c","�H�t��","��k��","���","��J","���闢","�c�[","�","����","���","�r��",
		"�ڔ�","���c�n��","�V��v��","�V�h","��X��","���h","�a�J","�b���","�ڍ�","�ܔ��c"};


	/// <summary>
	/// 1970�N
	/// </summary>
	/// <returns></returns>
	printf("�E1970�N\n");
	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 1971�N
	/// </summary>
	/// <returns></returns>
	printf("�E1971�N\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "�c�[") {
			itr = station.insert(itr,"�����闢");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 2020�N
	/// </summary>
	/// <returns></returns>
	printf("�E2020�N\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "�c��") {
			itr = station.insert(itr, "���փQ�[�g�E�F�C");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;
}