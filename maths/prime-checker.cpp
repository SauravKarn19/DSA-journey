#include<iostream>
using namespace std;

void primeChecker(int num){
    int count = 0;
    for(int i = 1; i * i <= num; i++){

        if(num % i == 0){
            count++;
            if((num / i) != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout << "The number is a prime number";
    }
    else{
        cout << "The number is not a prime number";
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    primeChecker(num);
    return 0;
}