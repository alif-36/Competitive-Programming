#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int n, k;
        scanf("%d%d", &n, &k);
        int t[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &t[j]);
        }
        int time = 0;
        for (int j = 0; j < k; j++) {
            int curTime = 0;
            for (int l = 0; l < n; l++) {
                curTime = fmax(curTime, t[l]) + t[l];
            }
            time = fmax(time, curTime);
        }
        printf("Case %d: %d\n", i, time);
    }
    return 0;
}
