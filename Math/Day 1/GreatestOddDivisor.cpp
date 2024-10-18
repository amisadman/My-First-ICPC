// Problem link : https://vjudge.net/problem/CSAcademy-odd_divisors
#include <bits/stdc++.h>
using namespace std;

// Complexity O(logn)
long long square(long long n) { return n * n; }

long long sum(long long n) {
    if (n == 0) return 0;
    if (n % 2 == 1) {
        return square((n + 1) / 2) + sum(n / 2);
    } else {
        return square(n / 2) + sum(n / 2);
    }
}

long long oddDivSum(int a, int b) {
    return sum(b) - sum(a - 1);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << oddDivSum(a, b) << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}