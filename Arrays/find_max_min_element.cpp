#include<iostream>
using namespace std;

//input from the user 
// take input like 10,20,30,40
int main(){
    int size,i;
    cout<<"enter the size: "; 
    cin>>size;
    int arr[size];
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (max<arr[i])
        max=arr[i];
    }
    cout<<"max no: "<<max<<endl;
        for (int i = 0; i < size; i++)
        {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"min no: "<<min<<endl;
}