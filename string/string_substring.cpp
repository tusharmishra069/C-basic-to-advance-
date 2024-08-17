#include<iostream>
using namespace std;
// in built string fucntion
int main(){
    string s = "chocolate";
    cout<<s.substr(0,3)<<endl;// to extract a substring from a string.
    cout<<s.substr(0,4)<<endl;//its take the index value from zero to ending arugment that is given
    cout<<s.substr(0)<<endl;//its take all the value from starting index to the end of the index
    cout<<s.substr(4,4);// here we can give first argument as the index and second argument as the no. of char we want 
}