#include<iostream>

using namespace std;

void printGCD(int num_1, int num_2){
    int n_1, n_2;
    for(int i=min(n_1,n_2); i>=1; i--){
        if(n_1%i==0 && n_2%i==0){
            cout<<" the gcd of two numbers is: "<<i;
        }
    }
}

int main(){
    int num_1, num_2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num_1>>num_2;
    printGCD(num_1, num_2);
    return 0;

}