#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define bug(a) cout << #a << " : " << a << '\n';

void print(int i , int arr[], int n) {

	if ( i >= n) return;
	print (i + 2, arr, n);
	cout << arr[i] << " ";

}
void solve() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	print(0 , arr, n);
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();


	return 0;
}