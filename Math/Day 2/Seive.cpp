//how to detect prime in o(1)

#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
bool sieve[1000001];

//complexity O(Nlog(logN))
void createSieve() {
	for (int i = 2; i <= N; i++) {
		sieve[i] = true;
	}

	for (int i = 2; i * i <= N; i++) {
		if (sieve[i] == true) {
			for (int j = i * i; j <= N; j += i) {
				sieve[j] = false;
			}
		}
	}
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	createSieve();
	int t; cin >> t;
	while (t--) {
		int n; cin  >> n;
		// check if n is prime or not
		if (sieve[n] == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}