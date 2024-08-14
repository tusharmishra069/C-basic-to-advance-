#include<iostream>
using namespace std;

//ques  find sum of array element

int sum(){
    int sum = 0;
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }
    cout<<sum;
}
int main(){
    sum();
}