#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x, k;
		cin >> n >> x >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// increment the counter if the difference between a corresponding
		// pair of elements is less than or equal to k
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (abs(a[i] - b[i]) <= k) {
				cnt++;
			}
		}
		cout << (cnt >= x ? "YES" : "NO") << '\n';
	}
	return 0;
}
