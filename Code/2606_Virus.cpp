#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> network;
vector<bool> visit;
int ans = 0;
void dfs(int v) {
	ans++;
	visit[v] = true;
	for (int i = 0; i < network[v].size(); i++) {
		if(!visit[network[v][i]])
			dfs(network[v][i]);
	}
	return;
}
int main() {
	int com_num;
	cin >> com_num;
	 network.resize(com_num+1);
	 visit.resize(com_num + 1);

	int net_num;
	cin >> net_num;
	for (int i = 0; i < net_num; i++) {
		int start, end;
		cin >> start >> end;
		network[start].push_back(end);
		network[end].push_back(start);
	}
	dfs(1);
	cout << ans - 1 << endl;
	return 0;
}