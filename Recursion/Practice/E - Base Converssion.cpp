#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << '\n';

void print(int n) {
    if ( n == 0) {
        return ;
    }
    int result = n / 2;
    int reminder = n % 2;
    print( result);
    cout << reminder;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        print(n);
        cout << endl;

    }


    return 0;
}