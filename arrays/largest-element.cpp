#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume first element is largest
    int maxi = arr[0];

    // Traverse array
    for(int i = 1; i < n; i++) {

        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    cout << "Largest Element: " << maxi << endl;

    return 0;
}