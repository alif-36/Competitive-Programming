#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<vector<char>> grid(10, vector<char>(10));

        // Read the grid
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        int tp = 0;

        // Calculate points
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                int pt = 1+min({i,j,9-i,9-j});
                    
                    tp+=pt;
                            
                }
            }
        }

        cout << tp << endl;
    }

    return 0;
}
