#include <math.h>
#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long sum = 0;
    for (int i = 1; i < 1000000; ++i) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    printf("%lu", sum);
}
