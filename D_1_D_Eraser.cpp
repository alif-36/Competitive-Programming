#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int x = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == 'B') {
                x++;
                for (int j = i; j < min(i + k, n); j++) {
                    s[j] = 'W';
                }
            }
            i++;
        }

        cout << x << endl;
    }

    return 0;
}
