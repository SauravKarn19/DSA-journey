// Problem:check palindrome of a number
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using reverse of a number.
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

if(num<0){
    cout<<"The number is not a palindrome"<<endl;
    return 0;// the program stops here if the number is negative.
}

if(num == reverseNumber(num)){
    cout<<"The number is a palindrome"<<endl;
} else{
    cout<<"the number is not a palindrome"<<endl;
}
return 0;
}