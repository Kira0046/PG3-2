#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list<const char *> station{"Oosaki","Sinagawa","Tamachi","Hamamatuchou","Sinbashi","Yuurakucyou","Toukyou","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo","Ootuka","Ikebukuro",
		"Meziro","Takadanobaba","Sinookubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro","Gotanda"};


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
		if (strcmp(*itr , "Tabata") == 0) {
			itr = station.insert(itr,"Nishinippori");
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
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = station.insert(itr, "Takanawageetowei");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;
}