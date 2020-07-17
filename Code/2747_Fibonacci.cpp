#include <iostream>
using namespace std;


int main() {
	int num,dp[46];
	dp[0] = 0; dp[1] = 1;
	for (int i = 2; i <= 45; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cin >> num;
	cout << dp[num] << endl;
}