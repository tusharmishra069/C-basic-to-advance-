/*=======================================LINKED LIST=========================================
-Collect a list of items and connect them according to your wish with another,this makes a proper linked list
-items are termed as nodes
-TYPES
1.Singly linked list
2.Doubly linked list
3.Circular linked list -a.single b.double
*/

/*NOTE- Implementation and Insertion is same

=>Insertion Types:-
1.Insert a node at the beginning 
2.Insert node at the end
3.Insert a node at given position

=>Traversal
Start traversing from head node , reach the last node .Last node=node.next marked as null

=>address part is always a pointer in a node

Terms-
1.head
2.data
3.next
4.head.data
5.head.next
*/

// algorithm to insert at end logic
/*1.create node - name it as newnode make it as head.
2.create another node - now this is newnode.
3. connect them both- head.next = newnode[ths is applicable if there is only two node]
4. if there is more thanm two nodes - need to traverse using a pointer called 'temp till last node
then - temp.next = newnode;
*/

#include<iostream>
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
    obj.insert(10);
    obj.insert(20);
    obj.insert(30);
    obj.insert(40);
    obj.display();
}