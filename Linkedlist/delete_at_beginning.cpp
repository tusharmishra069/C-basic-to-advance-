#include<iostream>
using namespace std;

//delete at beginning

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
        void deleteatbeginning();
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

    void linkedlist:: deleteatbeginning()
    {
        head  = head->next;
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
    int pos;
    int n,n1;
    cout<<"number of nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        obj.insertatend(n1);
    }
    cout<<"og likedlist"<<endl;
    obj.display();
    cout<<endl;
    cout<<"after deleting at beginning "<<endl;
    obj.deleteatbeginning();
    obj.display();
}