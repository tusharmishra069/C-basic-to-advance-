#include<iostream>
using namespace std;
// OOPS

// class is a blue print of an entire idea object is what we create based on the blueprint
// eg- class  object
//     bird   eagle
//     car    Hyundai,nissan

// note

// one class can have multiple objets 
// without creating objects class creation is of no use 

// importance of oops

// very effective in solving real time problems with good efficiency 

// 4 PILLARS OF OOPS
// encapsulation
// polymorphism
// data abstraction
// inheritance

class Animal{//creating the class animal 
    public:
    //attribute and behaviours
    string name = "cat";//attribute
    int age = 1; //attribute
    void sound(){// creating the behaviour
        cout<<"inside method"<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<"meoww"<<endl;
    }
};

int main(){
    Animal obj;//accessing the class and making it object
    obj.sound();// accessing the behaviour
    cout<<"from main"<<endl;
    cout<<obj.name;
}