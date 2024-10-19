#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << '\n';

void print(int n) {
    if (n == 0) {
        return;
    }

    int tmp = n % 10;
    n /= 10;
    print(n);
    cout << tmp << " ";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 0)cout << 0;
        else print(n);
        cout << '\n';

    }


    return 0;
}