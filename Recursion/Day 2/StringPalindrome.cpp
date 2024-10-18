#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bug(a) cout << #a << " : " << a << '\n';

bool isPalindromeRecursive(string s, int n, int i) {
    if (i == n) return true;

    if (s[i] != s[n - i - 1]) return false;

    return isPalindromeRecursive(s, n - 1, i + 1);
}

bool isPalindrome(string s) {
    string normalized;

    for (char c : s) {
        if (isalnum(c)) {
            normalized += tolower(c);
        }
    }
    int n = normalized.length();


    return isPalindromeRecursive(normalized, n, 0);

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << isPalindrome(s) << endl;
    }

    return 0;
}