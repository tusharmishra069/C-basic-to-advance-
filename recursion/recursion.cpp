#include<iostream>
using namespace std;

//  recursive function 
// function that called itself
// example
void check(){
    cout<<"smile";
    check();
}
int main(){
    check();
}