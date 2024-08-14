// Array An array is a data structure in programming that stores a collection of elements
// note:- -its very inportant datasturcture
// -to store many values we have this concept

// limitation- array size is static ,-same datatype only can be use 
// -accassing array
//   -types1. using index 
//   -type2. using noraml for loop 
//   -type3. using ehance for loop

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={100,200,300};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[-1]<<endl;// we dont have the negative indixicing in the c++ only have positve index
    cout<<"extracting using loops"<<endl;
    for(int i=0; i<3;i++)
    cout<<arr[i]<<endl;
    cout<<" extracting using Ehanced for loop"<<endl;
    for(int j:arr)
    cout<<j<<endl;
}