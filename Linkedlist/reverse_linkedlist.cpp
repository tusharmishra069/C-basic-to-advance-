#include<iostream>
using namespace  std;

//reverse linked list

class Node{
    public:
        int data;
        Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
    class linkedlist{
        public:
        Node *head;
        linkedlist(){
            head=NULL;
        }
        void insertatend(int data);
        void reverse();
        void display();
    };
    void linkedlist:: insertatend(int data){
        Node* newnode=new Node(data);
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
    }
    void linkedlist::reverse(){
        Node* current = head;
        Node* future=NULL;
        Node* prev=NULL;
        while(current)
        {
            future=current->next;
            current->next=prev;
            prev=current;
            current=future;
        }
        head=prev;
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

int main()
{
    linkedlist obj;
    char ch='y';
    int n1;
    cout<<"enter the first value in the linked list"<<endl;
    while(ch=='y')
    {
        cout<<"enter the element data"<<endl;
        cin>>n1;
        obj.insertatend(n1);
        cout<<"press y if u want to continue insertion"<<endl;
        cin>>ch;
    }
    cout<<"original linked list"<<endl;
    obj.display();
    cout<<endl;
    obj.reverse();
    cout<<"reversed linked list"<<endl;
    obj.display();
}