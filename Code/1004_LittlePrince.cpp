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
		int num; // �༺ �� 
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			int c_x, c_y, r;
			scanf("%d %d %d", &c_x, &c_y, &r);
			int d1 = pow(c_x - start_x, 2) + pow(c_y - start_y, 2);   // circle - start
			int d2 = pow(c_x - end_x, 2) + pow(c_y - end_y, 2);		// circle - end
			// f1 : �������� �� �ȿ� �ִ��� f2 : �������� �� �ȿ� �ִ���
			bool f1 = d1 > pow(r, 2) ? false : true;
			bool f2 = d2 > pow(r, 2) ? false : true;
			// �� ���� �� �ȿ� �ִ� �� ���ΰ� �ٸ� �� ��踦 �Ѿ�� �ϱ� ������ ans++
			if (f1 != f2) ans++;
		}
		printf("%d\n", ans);
	}
}