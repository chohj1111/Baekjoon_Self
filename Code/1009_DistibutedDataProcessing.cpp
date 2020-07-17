#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int a, b;
		cin >> a >> b;
		b = (b % 4 == 0) ? 4 : (b % 4);
		int result = a;
		for (int i = 2; i <= b; i++) {
			result = (result*a) % 10;
		}
		cout << result << endl;
	}
	return 0;
}