#include<iostream>
using namespace std;

// ques print the factorial , take input from the user

int fact(){
    int n, fact= 1;
    cout<<"enter the no:-";
    cin>>n;
    if(n>=0){
        cout<<"vaild input"<<endl;
    }
    else{
        cout<<"invaild input"<<endl;
    }
    for(int i = 1; i <= n; i++){
        fact*=i;
    }
    cout<<fact<<endl;
}
int main(){
    int res = fact();
}