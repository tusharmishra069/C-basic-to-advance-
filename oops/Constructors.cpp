#include<iostream>
using namespace std;

//  constructors 
// use to initialize instances
// note:- constructors name should be same class name

class Rectangle{
    public:
    int length;
    int breadth;
    // constructor
    Rectangle(int len, int brth) : length(len),breadth(brth) {}
    // functiom
    int getarea(){
        return length*breadth;
    }
};
int main(){
    Rectangle rect(8,6);
    cout<<"area: "<<rect.getarea();
}
