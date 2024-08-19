#include<iostream>
using namespace std;

// method overloading
void prod(int n1, int n2){
    cout<<n1*n2<<endl;
}
void prod(int n1, int n2,int n3){
    cout<<n1*n2*n3;
}
int main(){
    prod(10,20);
    prod(1,2,3);
}