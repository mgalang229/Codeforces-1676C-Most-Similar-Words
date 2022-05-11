#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<string> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		auto GetDistance = [](string a, string b, int m) {
			int sum = 0;
			for (int i = 0; i < m; i++) {
				int first = a[i] - 'a';
				int second = b[i] - 'a';
				sum += abs(first - second);
			}
			return sum;
		};
		int mn = INT_MAX;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				mn = min(mn, GetDistance(s[i], s[j], m));
			}
		}
		cout << mn << '\n';
	}
	return 0;
}
