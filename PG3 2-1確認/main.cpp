#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list<const char *> station{"εθ","iμ","c¬","lΌ¬","V΄","Ly¬","","_c","Ht΄","δk¬","γμ","ιςJ","ϊι’","c[","ξ","","εΛ","rά",
		"Ϊ","cnκ","VεvΫ","Vh","γXΨ","΄h","aJ","bδυ","Ϊ","ά½c"};


	/// <summary>
	/// 1970N
	/// </summary>
	/// <returns></returns>
	printf("E1970N\n");
	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 1971N
	/// </summary>
	/// <returns></returns>
	printf("E1971N\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "c[") {
			itr = station.insert(itr,"Όϊι’");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}
	printf("\n\n");
	/// <summary>
	/// 2020N
	/// </summary>
	/// <returns></returns>
	printf("E2020N\n");

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		if (*itr == "c¬") {
			itr = station.insert(itr, "ΦQ[gEFC");
			itr++;
		}
	}

	for (auto itr = station.begin(); itr != station.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;
}