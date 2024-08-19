#include<iostream>
using namespace std;

// multi level inheritence

class add{//grandparent
    public:
    int n1=10;
    int n2=20;
};
class multi:public add{//parerent
    public:
    int n3=30;
    int multi =(n1+n2)*n3 ;
};
class divide:public multi{//child
    public:
    int n4 = 5;
    int divide =multi/n4;
};

int main(){
    divide obj;//creating object
    cout<<obj.n1<<endl;//accees
    cout<<obj.n2<<endl;//accees
    cout<<obj.n3<<endl;//accees
    cout<<obj.n4<<endl;//accees
    cout<<obj.multi<<endl;//accees
    cout<<obj.divide<<endl;//accees
}