// stack implementation using Linked list:

/*1.creating the linked list by inserting at the begining .
2. always delete and pop the head 
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
    Node *top;
    int size;
    public:
    Stack(){
        top=NULL;
        size=0;
    }
    //push
    void push(int value){
        Node *temp=new Node(value);
        if(temp==NULL){
            cout<<"Stack Overflow\n";
            return;
        }
        else{
            temp->next=top;
            top=temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack\n";
        }
    }
    //pop
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow\n";
            return;
        }
        else{
            Node *temp=top;
            cout<<"Popped "<<top->data<<" from the stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }  
    //peek 
    int peek(){
        if(top==NULL){
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    bool isEmpty(){
        return top==NULL;
    }
    int isSize(){
        return size;
    }
};
int main(){
    Stack s;
    s.push(6); 
    s.push(16); 
    s.push(62); 
    s.push(86); 
    s.pop();
    cout<<s.isSize()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
