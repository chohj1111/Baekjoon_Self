#include <iostream>
#include <string>
#include <cmath>

using namespace std;
struct Point {
	int x, y;
	Point(int _x, int _y) { 
		x = _x;   y = _y;
	}
	long long dist(Point P) {
		return pow(x - P.x,2) + pow(y - P.y,2);
	}
};
int main() {
	int test;
    long long x1, y1, x2, y2, r1, r2;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (r1 < r2) swap(r1, r2);
		Point p1(x1, y1);
		Point p2(x2, y2);
		long long d = p1.dist(p2);
		if(d < pow(r1+r2, 2)&& d > pow(r1-r2,2)) printf("%d\n", 2); 
		else if(d==0 & r1 == r2)  printf("%d\n", -1);
		else if(d== pow(r1-r2,2) || d==pow(r1+r2,2))   printf("%d\n", 1);
		else  printf("%d\n", 0);

	}
	
	return 0;
}
