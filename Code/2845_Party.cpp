#include <iostream>

using namespace std;

int main() {
	int l, p;
	cin >> l >>p;
	int ppl = l * p;
	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		cout << input- l*p<<" ";
	}
	return 0;
}