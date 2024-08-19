#include<iostream>
#include<algorithm>
using namespace std;

// Encapsulation
// -binding instances and method inside one intitiy whichh is class is call as Encapsulation

// types:-
// -public
// -private
// -protected


// Public : it got global scope can be access inside and outside class

// example:-

class Encap{
    public:
    int a=55;
    void p(){
        cout<<"Encap function"<<endl;
        cout<<a<<endl;   // calling inside the method or class 
    }
};
int main(){
    Encap obj;//creating object
    obj.p(); // calling class fuction
    cout<<"calling in the main fucntion"<<endl;
    cout<<obj.a;// calling outside of the class
}