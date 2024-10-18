//problem link  : https://codeforces.com/problemset/problem/1294/C

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << '\n';

void solve() {

	int n; cin >> n;
	int a = 1, b = n, c = 1;
	for (int i = 2; i * i <= n; i++) {

		if (n % i == 0) {
			a = i;
			break;
		}
	}
	n /= a;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			if (i != a) {
				b = min(b, i);
			}
			if ((n / i) != i) {
				if (n / i != a) {
					b = min(b, (n / i));
				}
			}
		}
	}

	c = n / b;

	if (a != b and b != c and a != c and c >= 2) {
		cout << "Yes\n" << a << " " << b << " " << c << '\n';
	}
	else cout << "NO" << '\n';

}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}