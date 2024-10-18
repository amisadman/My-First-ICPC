// Print the count of the subset whos sum is divisible by k

#include<bits/stdc++.h>
using namespace std;

int subsequenceCount(int i , vector<int>arr, int n, int sum, int k) {

	if (i == n) {
		if (sum % k == 0 and sum != 0) {

			return 1;
		}
		return 0;
	}
	sum += arr[i];
	int l = subsequenceCount(i + 1, arr, n, sum, k);
	sum -= arr[i];
	int r = subsequenceCount(i + 1, arr, n, sum, k);

	return l + r;
}
int main() {
	int n; cin >> n;
	int k; cin >> k;
	vector<int>arr(n);
	for (int i = 0; i < n; i ++) {
		cin >> arr[i];
	}
	cout << subsequenceCount(0, arr, n, 0, k) << endl;

	return 0;
}