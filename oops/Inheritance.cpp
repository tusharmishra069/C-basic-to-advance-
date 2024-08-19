#include<iostream>
using namespace std;

// Inheritance
// - for efficency in terms of sharing properties between classes can be achive using inheritance

// type:
// 1.Single and simple inheritance
// 2.multiple inheritance
// 3.multi-level inheritance
// 4.hybrid inheritance
// 5.herarical inheritance

// 1.Single and simple inheritance example

class add{
    public:
    int n1,n2;

};
class multi:public add{
    public:
    int n3;
    void mlt(){
    int multi =(n1+n2)*n3 ;
    cout<<multi;
    }
};

int main(){
    multi obj;
    cout<<"enter three no. "<<endl;
    cin>>obj.n1>>obj.n2>>obj.n3;
    obj.mlt();
}