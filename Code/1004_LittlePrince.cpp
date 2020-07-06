#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int ans = 0;
		int start_x, start_y, end_x, end_y;
		scanf("%d %d %d %d", &start_x, &start_y, &end_x, &end_y);
		int num; // 행성 수 
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			int c_x, c_y, r;
			scanf("%d %d %d", &c_x, &c_y, &r);
			int d1 = pow(c_x - start_x, 2) + pow(c_y - start_y, 2);   // circle - start
			int d2 = pow(c_x - end_x, 2) + pow(c_y - end_y, 2);		// circle - end
			// f1 : 시작점이 원 안에 있는지 f2 : 도착점이 원 안에 있는지
			bool f1 = d1 > pow(r, 2) ? false : true;
			bool f2 = d2 > pow(r, 2) ? false : true;
			// 두 점이 원 안에 있는 지 여부가 다를 때 경계를 넘어야 하기 때문에 ans++
			if (f1 != f2) ans++;
		}
		printf("%d\n", ans);
	}
}