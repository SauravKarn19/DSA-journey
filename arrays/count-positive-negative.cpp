#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positiveCount = 0;
    int negativeCount = 0;

    // Count positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        }
        else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    cout << "Positive = " << positiveCount << endl;
    cout << "Negative = " << negativeCount << endl;

    return 0;
}