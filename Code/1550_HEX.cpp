#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	char hex[6]; 
	cin >> hex;
	int ans = (int)strtol(hex, NULL, 16);
	cout << ans << endl;
	return 0;
}