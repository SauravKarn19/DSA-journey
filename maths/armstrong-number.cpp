// Problem:Armstrong's number
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using extraction of digits.
// Time Complexity: O(log(n))
// Space Complexity: O(1)


#include<iostream>
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
}

int armstrongNumber(int num){
    int digits= countDigits(num);
    int sum = 0;
    while(num>0){
        int lastDigit = num % 10;
        sum = sum + pow(lastDigit,digits);
        num=num/10;
    }
    return sum;
}

int main(){
 int num ;
 cout << "enter a number: "<< endl;
 cin>>num;

 if ( num == armstrongNumber(num)){
    cout<<"the number is an Armstrong number"<<endl;
 } else {
    cout<<"the number is not an Armstrong number"<<endl;
 }
 return 0;
}