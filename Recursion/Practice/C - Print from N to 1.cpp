#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << '\n';

void print(int i , int n) {
    if (i > n) {
        return;
    }
    print(i + 1, n);
    if (i == 1) {
        cout << 1;
    } else cout << i << " ";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    print(1, n);

    return 0;
}