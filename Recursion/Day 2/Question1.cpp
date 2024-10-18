/*

Print the subsets whos sum is divisible by k

arr -> {4,3,2} k = 3

ans -> {4,2} sum 6 {3} sum 2

*/

#include<bits/stdc++.h>
using namespace std;

int sum = 0;
void subsequenceSum(int i , vector<int>arr, int n, int k) {

	if (i == n) {
		if (sum % k == 0 and sum != 0) cout << sum << endl;

		return;
	}

	sum += arr[i];
	subsequenceSum(i + 1, arr, n, k);
	sum -= arr[i];
	subsequenceSum(i + 1, arr, n, k);
}
int main() {

	int n; cin >> n;
	int k ; cin >> k;
	vector<int>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	subsequenceSum(0, arr,  n, k);

	return 0;
}