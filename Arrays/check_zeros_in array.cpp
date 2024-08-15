#include<iostream>
using namespace std;

//ques:- create 1-d array check for zeros in the arrays and print the count 
int main(){
    int size,count=0;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }
    }
    cout<<"total no of zeros:- "<<count;  
}