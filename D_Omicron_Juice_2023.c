#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int a, b, c, k,x;
        scanf("%d%d%d%d", &a, &b, &c, &k);
        int g = gcd(a, gcd(b, c));
        x=a+b+c);
        if (k >= g && ) {
            printf("Case %d: Peaceful\n", t);
        } else {
            printf("Case %d: Fight\n", t);
        }
    }
    return 0;
}