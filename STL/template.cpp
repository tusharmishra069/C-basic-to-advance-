#include<iostream>
using namespace std;


// Templates in C++ are a powerful feature that allows you to write generic and reusable code. 
// They enable you to define functions and classes that can operate with any data type without being rewritten for each type
// Templates are widely used in the Standard Template Library (STL) for containers like vector, list, and algorithms like sort

// class template example


template <class T>
class Number {
   private:
    T num;
   public:
    Number(T n) : num(n) {}   // constructor
    T print() {
        return num;
    }
};
int main() {
    Number<int> nint(7);
    Number<double> ndouble(7.7);
    cout<< nint.print() << endl;
    cout<< ndouble.print();
    return 0;
}