#include <iostream>
#include <queue>

using namespace std;
int N, M;
int dirx[] = { 0,0,-1,1 };
int diry[] = { -1,1,0,0 }; 
int dist[101][101]; // (1,1)���� �� ĭ���� �̵��� �Ÿ� 
int maze[101][101]; // �Է� ���� ���� 
bool check[101][101]; // �ش� ĭ�� �鷶�� ���� �ִ��� ����

void bfs() {
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0)); // ù ĭ ����
	dist[0][0] = 1; 
	check[0][0] = true;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dirx[i];  int ny = y + diry[i];
			if (nx>=0 && nx < N && ny >= 0 && ny < M) {
				if (maze[nx][ny] == 1 && check[nx][ny] == false)
				{
					q.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
					check[nx][ny] = true;
				}
			}
		}
	}
}

int main() {

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d",&maze[i][j]);
		}
	}
	bfs();
	cout << dist[N - 1][M - 1] << endl;
	return 0;
}