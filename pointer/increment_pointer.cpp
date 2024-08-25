#include<iostream>
using namespace std;


int main(){
    int num =5;
    int *ptr = &num;
    //increment in the pointer
    (*ptr)++;//need to write in the bracket for the increament other wise its shows the garbage value 
    cout<<num;
}