#include<bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {

	long long result = 1;
	while (b > 0) {

		if (b & 1) {
			result = result * a;
		}
		b >>= 1;
		a = a * a;

	}
	return result;
}
int main() {
	long long a, b; cin >> a >> b;
	cout << binpow(a, b);

	return 0;
}