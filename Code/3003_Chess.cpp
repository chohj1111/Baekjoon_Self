#include <iostream>
using namespace std;
int main() {
	int target[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
	{
		int a;
		cin >> a;
		cout << target[i] - a << " ";
	}
	return 0;

}