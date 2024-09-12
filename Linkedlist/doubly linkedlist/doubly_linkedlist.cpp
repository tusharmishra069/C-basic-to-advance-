#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node* prev;
    Node()
    {                                    
        data=0;
        next=NULL;
        prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insert(int data);
        void display();
    };
    void linkedlist::insert(int data)
    {
       Node* newnode = new Node(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev=temp;
    }
     void linkedlist:: display(){
        Node* temp = head;
        if(head==NULL){
            cout<<"list empty"<<endl;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    int main(){
        linkedlist obj;
        obj.insert(100);
        obj.insert(200);
        obj.insert(300);
        obj.insert(400);
        obj.display();
    }