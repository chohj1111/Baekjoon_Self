#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main(void) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int temp = 0;
		scanf("%d", &temp);
		if (temp < 40) temp = 40;
		sum += temp;
	}
	printf("%d\n", sum / 5);
}