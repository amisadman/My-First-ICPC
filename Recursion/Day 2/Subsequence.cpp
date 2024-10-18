#include<bits/stdc++.h>
using namespace std;

vector<int> temp;

void subsequence(int i , vector <int>&tmp, int arr[], int n) {
	if (i == n) {

		for (auto it : temp) {
			cout << it << " ";
		}
		cout << endl;
		return;
	}

	temp.push_back(arr[i]);

	subsequence(i + 1, temp, arr, n);

	temp.pop_back();
	subsequence(i + 1, temp, arr, n);
}
int main() {
	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n ; i ++) {
		cin >> arr[i];
	}
	subsequence(0, temp, arr, n);


	return 0;
}