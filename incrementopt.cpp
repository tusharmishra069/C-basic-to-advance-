#include<iostream>
using namespace std;

// increment operator
// post increment and pre increment

int main(){
    int a =100;
    cout<<a<<endl;
    int temp = a++;//post increment
    cout<<temp<<endl;
    cout<<a<<endl;

    int b =100;
    cout<<b<<endl;
    int temp1 = ++b;//preincrement
    cout<<temp1<<endl;
    cout<<b;
}