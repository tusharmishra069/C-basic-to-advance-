#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//changing the value of variable using pointers

int main(){
    int n = 100;
    int *ptr;
    ptr = &n;
    *ptr = 200;
    cout<<n;
}

