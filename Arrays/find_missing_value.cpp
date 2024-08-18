#include<iostream>
using namespace std;

// question find the missing value in natural no. array 
int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elemet: "<<endl;
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    int nsum=0;
    nsum = (n*(n+1))/2;
    cout<<"the missing value is: "<<nsum-sum;
}
