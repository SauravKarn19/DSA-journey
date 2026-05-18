#include <iostream>
using namespace std;

void printName(int n, string name) {
    // Base condition
    if (n == 0) {
        return;
    }

    cout << name << endl;

    // Recursive call
    printName(n - 1, name);
}

int main() {
    int n;
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter how many times to print: ";
    cin >> n;

    printName(n, name);

    return 0;
}