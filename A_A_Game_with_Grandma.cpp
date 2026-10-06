#include <bits/stdc++.h>
using namespace std;

const int N = 105;
char a[N][N];
int n, t;

bool check(int x, int y) {
  return x >= 0 && x < 3 && y >= 0 && y < n && a[x][y] == 'O';
}

bool solve() {
  int cnt = 0;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < n; j++)
      cnt += (a[i][j] == 'O' && check(i, j + 1) && check(i + 1, j) && check(i + 1, j + 1));
  return cnt % 2 == 0;
}

int main() {
  cin >> t;
  for (int cs = 1; cs <= t; cs++) {
    cin >> n;
    for (int i = 0; i < 3; i++) cin >> a[i];
    cout << "Case " << cs << ": ";
    cout << (solve() ? "Jhinuk" : "Grandma") << endl;
  }
  return 0;
}
