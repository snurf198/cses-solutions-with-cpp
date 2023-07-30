#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int size;
	vector<int> nums;

	cin >> size;

	for(int i = 0; i < size; i++) {
		int elem;
		cin >> elem;
		nums.push_back(elem);
	}

	int temp_max = nums[0]; 
	int temp_num;
	long long ans = 0;

	for(int i = 1; i < size; i++) {
		temp_num = nums[i];

		if (temp_max > temp_num) {
			ans += (long long) (temp_max - temp_num);
		} else {
			temp_max = temp_num;
		}
	}

	cout << ans << "\n";
}
