#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
void selectionSort() {
	for (int i = 0; i < v.size() - 1; i++) {
		int temp = i;
		for (int j = i+1; j < v.size(); j++) {
			if (v[temp] > v[j]) temp = j;
		}
		swap(v[i], v[temp]);
	}
}
int main() {
	int N;
	int ans = 0;
	cin >> N;
	v.resize(N);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	selectionSort();
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j <= i; j++) {
			ans += v[j];
		}
	}
	cout << ans<< endl;
}