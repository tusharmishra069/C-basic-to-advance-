#include<iostream>

using namespace std;

// 2.multiple inheritance example

class Car1{
    public:
    int x=10;
    void p1(){
        cout<<"hello Mr x"<<endl;
        cout<<x;
    }
};

class Car2{
    public:
    int y=20;
    Car1 obj1;
    void p2(){
        cout<<"hello Mr y"<<endl;
        cout<<y;
        cout<<"other class instance"<<endl;
        cout<<obj1.x;
    }
};

int main(){
    Car1 obj1;
    obj1.p1();
    cout<<obj1.x<<endl;
    Car2 obj2;
    obj2.p2();
    cout<<obj2.y<<endl;
}
