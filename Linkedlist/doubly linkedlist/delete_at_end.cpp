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
        void deleteatend();
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
    void linkedlist:: deleteatend()
    {
        Node* temp = head;
        Node* prev = temp;
        while(temp->next!=NULL)
        {
            prev =temp;
            temp = temp->next;
        }
        prev->next=NULL;
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
    int pos;
    int n,n1;
    cout<<"number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        obj.insertatend(n1);
    }
    obj.deleteatend();
    obj.display();
    cout<<endl;
}