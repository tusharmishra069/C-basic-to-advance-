#include<iostream>
using namespace std;
// print fibonacci sereies using recusrion

int fibo(int n){
    if(n<=1 ){
        return n;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<" ";
    }
}