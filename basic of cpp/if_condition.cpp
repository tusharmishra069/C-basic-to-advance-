#include<iostream>
using namespace std;
// conditional statement 

// if statement

// ques take integer no as input and check and print the no. is +ve , -ve and also the odd and even 


int main(){
    int n;
    cout<<"enter the no :- ";
    cin>>n;
    if(n%2==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    if(n>0){
        cout<<" & positive";
    }
    else{
        cout<<" & negative";
    }
}