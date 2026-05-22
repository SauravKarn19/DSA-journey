#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Check for factor 2 separately
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is still > 1, it's a prime number
    if (n > 1) {
        cout << n;
    }

    return 0;
}