#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;

    for(long long i = 1; i * i <= n; i++) {

        if(n % i == 0) {

            // Perfect square case
            if(i * i == n) {
                sum += i;
            }
            else {
                sum += i;       // first divisor
                sum += n / i;   // paired divisor
            }
        }
    }

    cout << sum << endl;

    return 0;
}