#include<iostream>
using namespace std;

// dynamic array 

int main(){
    int size;
    cout<<"enter the size:- ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"elements are:- "<<endl;
        for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

}