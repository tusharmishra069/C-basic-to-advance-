#include<iostream>
using namespace std;

// type2 withou argument with return value

int display(){
    int n=100;
    if(n>50)
    return 1;
    else 
    return 0;
}
int main()
{
    int res = display();
    cout<<res;
}