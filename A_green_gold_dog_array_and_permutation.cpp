#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> find_permutation(int n, vector<int>& a) {
    vector<int> b(n, 0);
    vector<bool> used(n + 1, false);

    for (int i = 0; i < n; ++i) {
        if (a[i] <= n && !used[a[i]]) {
            b[i] = a[i];
            used[a[i]] = true;
        }
    }

    int j = 1;
    for (int i = 0; i < n; ++i) {
        if (b[i] == 0) {
            while (used[j]) {
                j++;
            }
            b[i] = j;
            j++;
        }
    }

    return b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> permutation = find_permutation(n, a);

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
