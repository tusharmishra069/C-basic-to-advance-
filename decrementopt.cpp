#include<iostream>
using namespace std;
// decrement operator
// post decrement and pre decrement

int main(){
    int a =100;
    cout<<a<<endl;
    int temp = a--;//post-decrement
    cout<<temp<<endl;
    cout<<a<<endl;

    int b =100;
    cout<<b<<endl;
    int temp1 = --b;//pre-decement
    cout<<temp1<<endl;
    cout<<b;
}