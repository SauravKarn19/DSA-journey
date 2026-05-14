// Problem: print all the divisors of the number. basic approach
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using loop and modulo operators.
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<iostream>
using namespace std;

void printDivisors(int num){
    for(int i = 1;i <= num; i++){
        if(num%i==0){
            cout<<i<<" , ";
        }
    }
}

int main(){
    int num;
    cout<<"enter a number: "<<endl;
    cin>>num;
    cout<< "all the divisors are: "<<endl;
    printDivisors(num);
    return 0;
}