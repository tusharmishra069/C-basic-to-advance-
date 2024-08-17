#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//question add three no. from the user and add it using the concept of pointers

int main(){
    int n1,n2,n3;
    cout<<"enter  three numbers:";
    cin>>n1>>n2>>n3;
    int *ptr1=&n1;
    int *ptr2=&n2;
    int *ptr3=&n3;
    cout<<"sum="<<(*ptr1+*ptr2+*ptr3);
    return 0;
}
