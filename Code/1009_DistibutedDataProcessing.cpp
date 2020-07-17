#include <iostream>

using namespace std;

int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		b = (b % 4 == 0) ? 4 : (b % 4);
		int result = a % 10;
		for (int i = 2; i <= b; i++) {
			result = (result*a) % 10;
		}
		if (result == 0) result = 10;
		printf("%d\n", result);
	}

	return 0;
}