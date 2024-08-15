#include<iostream>
using namespace std;

// question revese the array element

int main(){
    int sum = 0;
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int j = size-1; j > -1; j--)
    {
       cout<<arr[j]<<endl;
    }
}    
