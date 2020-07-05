#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include "stdlib.h"
using namespace std;
int main() {
	int dp[41] = { 0,1, 1};
	for (int i = 3; i <= 40; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	int test;
	scanf("%d", &test);
	
	for (int i = 0; i < test; i++) {
		int num;
		scanf("%d", &num);
		if (num == 0) printf("1 0\n");
		else if (num == 1) printf("0 1\n");
		else	printf("%d %d\n", dp[num - 1], dp[num]);
	}
	
	return 0;
}
