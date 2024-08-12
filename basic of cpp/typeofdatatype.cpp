#include<iostream>
#include<string>
#include<typeinfo>
#include<type_traits>
using namespace std;
int main(){
    int n1 = 100;
    float f1 = 200.99;
    double d1 = 58.697;
    char c1 = 'g' ;
    
    cout<<typeid(n1).name()<<endl;
    cout<<typeid(f1).name()<<endl;
    cout<<typeid(d1).name()<<endl;
    cout<<typeid(c1).name()<<endl;
}