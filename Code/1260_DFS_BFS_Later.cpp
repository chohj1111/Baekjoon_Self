#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
vector<int> a[1001];
bool check[1001];
void dfs(int node) {
	stack<pair<int, int>> s;
	s.push(make_pair(node, 0));
	check[node] = true;
	printf("%d ", node);
	while (!s.empty()) {
		int node = s.top().first;
		int start = s.top().second;
		s.pop();
		for (int i = start; i < a[node].size(); i++) {
			// 노드에 연결된 다른 노드들 확인
			int next = a[node][i];
			if (check[next] == false) {
				printf("%d ", next);
				check[next] = true;
				// dfs & stack 특성 이용 next에 연결된 첫 노드를 다음 탐색 target으로 
				s.push(make_pair(node, i + 1));
				s.push(make_pair(next, 0));
				//next에 연결된 노드가 우선이므로 break
				break;
			}
		}
	}
}
void bfs(int start) {
	queue<int> q;
	check[start] = true;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}
int main() {
	int n, m, start;
	scanf("%d %d %d", &n, &m, &start);
	for (int i = 0; i < m; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}
	dfs(start);
	printf("\n");
	memset(check, false, sizeof(check));
	bfs(start);
	printf("\n");
	return 0;
}