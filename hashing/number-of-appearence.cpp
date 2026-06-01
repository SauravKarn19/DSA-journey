#include<iostream>
using namespace std;

int value(int size, int arr[], int target){
    int count=0;
    for(int i=0; i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}


int main(){
    int size, target;
    cout<<"enter size of the array"<<endl;
    cin>>size;

    int arr[100];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
   cout<<"enter the number to check frequency"<<endl;
   cin>>target;

   cout<<"the number "<< target<< "appears "<<value(size,arr,target)<<" times."<<endl;
   return 0;
}