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
        void insertatbeginning(int data);
        void deleteatbeginning();
        void insertatposition(int data,int pos);
        void deleteatposition(int pos);
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
    void linkedlist :: insertatbeginning(int data){
        Node* newnode = new Node(data);
        if(head->prev=NULL){
            head->prev = newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
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
     void linkedlist:: deleteatbeginning()
    {
        head  = head->next;
        head->prev = NULL;
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
    void linkedlist:: deleteatposition(int pos)
    {
        Node* temp = head;
        Node* prev = temp;
        for(int i=0;i<pos;i++)
        {
            prev = temp;
            temp=temp->next;
        }
        prev->next = temp->next;
    }
    void linkedlist:: reverse(){
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
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
    obj.insertatbeginning(50);
    obj.insertatposition(23,2);
    obj.deleteatbeginning();
    obj.deleteatposition(3);
    obj.deleteatend();
    obj.display();
    cout<<endl;
    obj.reverse();
}