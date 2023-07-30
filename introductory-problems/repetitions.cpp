#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin, s);

	int max_length = 1;
	int temp_length = 1;

	for(int i = 1; i < s.size(); i++) {
		if (s[i] == s[i-1]) {
			temp_length += 1;	
		} else {
			max_length = max(max_length, temp_length);

			temp_length = 1;
		}
	}

	max_length = max(max_length, temp_length);
	
	cout << max_length << "\n";
}
