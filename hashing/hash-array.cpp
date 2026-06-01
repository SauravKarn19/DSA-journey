#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of the array:"<<endl;
    cin>>size;
    int arr[size];

    cout<<"enter elements of an the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int hashArray[100]={0};

    for(int i=0; i<size;i++){
        hashArray[arr[i]]++;
    }
    cout<<"frequency:"<<endl;
       for(int i = 0; i < 100; i++) {
        if(hashArray[i] > 0) {
            cout << i << " -> " << hashArray[i] << endl;

        }

    }

    return 0;
}