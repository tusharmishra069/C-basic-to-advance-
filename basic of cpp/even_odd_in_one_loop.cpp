#include<iostream>
using namespace std;
//printing  both odd and even in the one loop
int main(){
    int num,i=1,j=0;
    cout<<"enter the uper bound:- ";
    cin>>num;
    cout<<"odd\teven"<<endl;
    while(i<=num){
        j=i+1;
        cout<<i<<"\t"<<j<<endl;
        i = i+2;
    }

}