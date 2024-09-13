#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prev;
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
        void insertatend(int data);
        void insertatposition(int data,int pos);
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
        newnode->prev = temp;
    }
    void linkedlist::insertatposition(int data,int pos){
        Node* newnode = new Node(data);
        Node* temp = head;
        Node* temp1;
        for(int i=0;i<pos-1;i++){
            temp =temp->next;
        }
        temp1=temp->next;
        temp1->prev =newnode;
        newnode->prev=temp;
        newnode->next=temp1;
        temp->next=newnode;
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
    int n,n1;
    cout<<"number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        obj.insertatend(n1);
    }
    obj.insertatposition(23,2); 
    obj.display();
    cout<<endl;
}