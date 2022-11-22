#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list<const char *> station{"大崎","品川","田町","浜松町","新橋","有楽町","東京","神田","秋葉原","御徒町","上野","鶯谷","日暮里","田端","駒込","巣鴨","大塚","池袋",
		"目白","高田馬場","新大久保","新宿","代々木","原宿","渋谷","恵比寿","目黒","五反田"};


	/// <summary>
	/// 1970年
	/// </summary>
	/// <returns></returns>
	printf("・1970年\n");
	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 1971年
	/// </summary>
	/// <returns></returns>
	printf("・1971年\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "田端") {
			itr = station.insert(itr,"西日暮里");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 2020年
	/// </summary>
	/// <returns></returns>
	printf("・2020年\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "田町") {
			itr = station.insert(itr, "高輪ゲートウェイ");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;
}