#include<iostream>
#include<stack>
using namespace std;

//stack is based on lifo


int main(){
    stack<int> s; 
    s.push(10); //push is use to store the data 
    s.push(20);
    s.push(30);
    cout << "Size of stack: " << s.size() << endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop(); //pop remove the  data from the stack, and its remove from the top 

    }
}