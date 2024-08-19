#include <iostream>
using namespace std;

// herical inhertance example

class base{
    public:
    void func1(){
        cout<<"this is inside the main parent class"<<endl;
    }
};

class child1:public base{
    public:
    void func2(){
        cout<<"this is inside the first child class"<<endl;
    }
};

class child2: public base{
    public:
    void func3(){
        cout<<"this is inside the second child class"<<endl;
    }
};

class child3: public base{
    public:
    void func4(){
        cout<<"this is inside the third child class"<<endl;
    }
};

int main(){
    child1 c1;
    child2 c2;
    child3 c3;
    c1.func1();
    c1.func2();
    c2.func1();
    c2.func3();
    c3.func1();
    c3.func4();
    return 0;
}