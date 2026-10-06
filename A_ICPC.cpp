#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to count the prime factors of a number
int prime_factors_count(int n) {
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && is_prime(i)) {
            count++;
            n /= i;
        }
        if (n == 1) break;
    }
    return count;
}

// Function to find the longest subarray with K almost prime factors and no perfect prime factors
int find_longest_subarray(int N, int K, vector<int>& A) {
    int left = 0, right = 0;
    int max_length = 0;
    vector<int> prime_counts(N + 1, 0);
    int almost_prime_count = 0;

    while (right < N) {
        int prime_count = prime_factors_count(A[right]);
        prime_counts[right] = prime_count;

        if (prime_count == K) {
            almost_prime_count++;
        }

        while (almost_prime_count > K) {
            if (prime_counts[left] == K) {
                almost_prime_count--;
            }
            left++;
        }

        right++;
        if (almost_prime_count == K) {
            max_length = max(max_length, right - left);
        }
    }

    return max_length;
}

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; case_num++) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = find_longest_subarray(N, K, A);
        cout << "Case " << case_num << ": " << result << endl;
    }

    return 0;
}
