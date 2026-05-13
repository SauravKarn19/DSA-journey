// Problem: digit extraction from a number and count it.
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using loop and modulo operators.
// Time Complexity: O(log(n))
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int main() {
int num;
cout<<"Enter a number: "<<endl;
cin>>num;
int count=0;

if(num==0){
    cout<<0;
    return 0;
}

if(num<0){
    num=-num;
}

while(num>0){
    int lastDigit=num%10;
     cout<<"digit: "<<lastDigit<<endl;
     count=count+1;
    num=num/10;
}
cout<<"the number of digits are: "<<count;
return 0;
}