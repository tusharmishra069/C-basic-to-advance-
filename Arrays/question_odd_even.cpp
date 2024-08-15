#include<iostream>
using namespace std;

// ques - extract odd and even no. spearately from the array print the element also if some of array is in between 30-50 print the some else 
//        return 0 for odd no. multiple every element with 2 and print it

int main(){
    int size,i,sum=0,sum1=0,sum2=0;
    cout<<"enter the size:- ";
    cin>>size;
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"even series"<<endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<arr[i]<<endl;
            sum=sum+arr[i];
        }
    }
    if (sum>29 && sum<51)
    {
        cout<<"sum= "<<sum<<endl;
    }
     cout<<"odd series, with is double of its og no."<<endl;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]*2<<endl;
        }
    }
    
}