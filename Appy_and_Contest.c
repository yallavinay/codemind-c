#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

char* canWin(long long n, long long a, long long b, long long k) {
    long long countA = n / a - n / lcm(a, b);
    long long countB = n / b - n / lcm(a, b);
    long long total = countA + countB;

    if (total >= k) {
        return "Win";
    } else {
        return "Lose";
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long n, a, b, k;
        scanf("%lld %lld %lld %lld", &n, &a, &b, &k);

        char* result = canWin(n, a, b, k);
        printf("%s
", result);
    }

    return 0;
}
