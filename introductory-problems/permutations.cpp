#include <bits/stdc++.h>

using namespace std;

vector<int> permutation;
int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	if (n == 1) cout << 1 << "\n";
	else if (n < 4) cout << "NO SOLUTION" << "\n";
	else if (n == 4) cout << "2 4 1 3" << "\n";
	else {
		for (int i = 1; i <= n; i += 2) cout << i << " ";
		for (int i = 2; i <= n; i += 2) {
			cout << i;
			if(i + 2 <= n) cout << " ";
			else cout << "\n";
		}
	}
}
