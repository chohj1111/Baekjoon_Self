#include <iostream>
#include <cmath>
#define MAX 15
using namespace std;

int col[MAX];	
int N;
int ans = 0;

bool isValid(int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (col[cnt] == col[i] || abs(col[cnt] - col[i]) == cnt - i) return false;
	}
	return true;
}
void DFS(int cnt) {
	if (cnt == N) {
		ans++;	
		return;
	}
	for (int i = 0; i < N; i++) {
		col[cnt] = i; // cnt 행의 퀸은 i 번째 열에 있음
		if (isValid(cnt)) {
			DFS(cnt+1);
		}
	}
}

int main() {
	cin >> N;
	DFS(0);
	cout << ans << endl;
}