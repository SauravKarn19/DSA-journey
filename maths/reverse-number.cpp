// Problem:reverse a number
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using extraction of digits.
// Time Complexity: O(log(n))
// Space Complexity: O(1)


#include<iostream>
using namespace std;

int reverseNumber(int num){
    int revNum = 0;
    while(num > 0){
        int lastDigit = num%10;
        revNum = (revNum*10)+ lastDigit;
        num = num/10;
    }
    return revNum;
}

int main(){
int num;
cout<<"enter a number: "<<endl;
cin>>num;
cout<<"the reverse of the number is: " <<reverseNumber(num)<<endl;
if(num == reverseNumber(num)){
    cout<<"The number is a palindrome"<<endl;
} else{
    cout<<"the number is not a palindrome"<<endl;
}
}