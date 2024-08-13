#include<iostream>
using namespace std;

//check the no. is prime no. aur not

void prime(){
    int n,count=0 ;
    cout<<"enter the no.:- ";
    cin>>n;
    for (int i = 2; i < n; i++){
    if(n%i==0){
        count++;
    }
}
if(count==0){
    cout<<"prime no.";
}
else {
    cout<<"composite no.";
}
}