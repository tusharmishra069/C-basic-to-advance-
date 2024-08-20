#include<iostream>
using namespace std;

// class temp for the basic calculator

template <class T>
class Number {
   private:
    T n1,n2;
   public:
    Number(T n1,T n2) : n1(n1),n2(n2) {}   // constructor
    T add() {
        return n1+n2;
    }
    T sub() {
    return n1-n2;
    }
};
int main() {
    Number<int> nint(7,8);
    Number<double> ndouble(7.7,9.8);
    cout<< nint.add() << endl;
    cout<< ndouble.add()<<endl;
    cout<<nint.sub();
    return 0;
}