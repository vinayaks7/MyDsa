#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>g;
vector<int>visited;


void dfs(int i) {

	visited[i] = 1;
	for (auto j : g[i]) {

		dfs(j);

	}



}





bool cycleDetection(int par, int vertex) {

	visited[vertex] = true;
	bool isLoopExists = false

	for (int child : g[vertex]) {

		if (visited[child] && child == par) {
			continue;
		}
		if (visited[child])return true;
		cycleDetection(vertex, child);

	}



}


int main() {


	int ver, edg;
	cin >> ver >> edg;

	for (int i = 0; i < edg; i++) {

		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	int count = 0;

	for (int i = 1; i <= ver; i++) {
		if (visited[i] == 1) {
			continue;
		}
		dfs(i);
		count++;
	}


	cout << count;






	return 0;
}