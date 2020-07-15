#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[1001];
bool check[1001];

void DFS(int v) {
	check[v] = true; 
	cout << v << " ";
	for (int i = 0; i < graph[v].size(); i++) {
		if(!check[graph[v][i]])
			DFS(graph[v][i]);
	}
}

void BFS(int v) {
	queue<int>q;
	q.push(v);
	check[v] = true;
	cout << v << " ";
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < graph[x].size(); i++) {
			int y = graph[x][i];
			if (!check[y]) {
				check[y] = true;
				cout << y << " ";
				q.push(y);
			}
		}
	}
}

int main() {
	int n, m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int from, int to;
		cin >> from >> to;
		graph
	}
}