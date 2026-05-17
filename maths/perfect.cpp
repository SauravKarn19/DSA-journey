#include<iostream>
using namespace std;

void checkPerfect(int n){
    int sum = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        cout << "Perfect Number";
    }
    else{
        cout << "Not Perfect Number";
    }
}

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    checkPerfect(n);

    return 0;
}