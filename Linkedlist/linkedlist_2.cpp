#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{//creating a structure aur class
    public:
    int data;
    Node *next;
    Node(){//constructor
        data=0;
        next=NULL;
    }
    Node(int data){//another constructor for accessing
        this->data=data;//here we use the this function , this keyword is use to access the real value
        this->next=NULL;
    }
};

class Linkedlist{//this class for the activation of the linked list
    public:
    Node *head;
    Linkedlist(){
        head=NULL;
    }
        void insert(int data);
        void display();
    };


    void Linkedlist::insert(int data){//this fucntion for the inserting the value                                                       
        Node *newnode = new Node(data);
        if(head==NULL){
            head=newnode;
        return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newnode;
    }
    void Linkedlist::display(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list empty"<<endl;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

int main(){
    Linkedlist obj;
    // by the user input
  int n;
      for(int i=0;i<5;i++){
      cin>>n;
      obj.insert(n);}
    obj.display();

}