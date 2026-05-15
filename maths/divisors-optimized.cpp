// Problem: print all the divisors of the number.optimized approach.
// Platform: Striver's course
// Difficulty: Easy
// Topic: maths 
// Approach: using sqrt and vector to store it.
// Time Complexity: O(sqrt(n))
// Space Complexity: O(k); where k is the number of divisors
#include<iostream>
using namespace std;

void printDivisors(int num){
    vector<int>divisors;
    for(int i=1; i<=sqrt(num); i++){
        if(num%i==0){
           divisors.push_back(i);
        }
        if((num/i)!=i){
           divisors.push_back(num/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for(int x : divisors){
         cout << x << " ";
}
}



int main(){
    int num;
    cout<<" enter a number: "<<endl;
    cin>>num;
    cout<<"the output is : "<<endl;
    printDivisors(num);
    return 0;
}