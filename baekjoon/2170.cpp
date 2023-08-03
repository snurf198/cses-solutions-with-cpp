#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> points;

  for(int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    points.push_back({a, 1});
    points.push_back({b, 0});
  }

  sort(points.begin(), points.end());

  int sum = 0;
  int open = 0;
  int start = 0;
  
  for(pair<int, int> point: points) {
    if(point.second) {
      if(!open) {
        start = point.first;
      }
      open++;
    } else {
      open--;
      if(!open) {
        sum += point.first - start;
      }
    }
  }

  cout << sum << endl;
}
