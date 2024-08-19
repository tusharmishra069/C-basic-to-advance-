#include<iostream>
using namespace std;

// Private : can be access inside  the class , cannot be access outside the classs
// note:- private cannot access between classes

// example

class Encap{
    private:
    int a=55;
    public:
    void p(){
        cout<<"Encap function"<<endl;
        cout<<a<<endl;
    }
};
int main(){
    Encap obj;
    obj.p();
    // cout<<obj.a;// we cannot call this because its a private class
}
