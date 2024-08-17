#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// pointers concept

int main(){
    int n = 100;
    cout<<&n<<endl;// geting access directly by adding '&' 
    int *ptr;// declare the pointer 
    ptr = &n;// referencing
    cout<<ptr<<endl;// access the address by the help of pointers
    cout<<*ptr;// dereferencing , and getting the value
}



