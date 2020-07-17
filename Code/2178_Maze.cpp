#include <iostream>
#include <queue>

using namespace std;
int N, M;
int dirx[] = { 0,0,-1,1 };
int diry[] = { -1,1,0,0 }; 
int dist[101][101]; // (1,1)에서 각 칸까지 이동한 거리 
int maze[101][101]; // 입력 정보 저장 
bool check[101][101]; // 해당 칸을 들렀던 적이 있는지 여부

void bfs() {
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0)); // 첫 칸 시작
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