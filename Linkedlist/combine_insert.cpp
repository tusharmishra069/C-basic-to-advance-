#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node *next;
};

int main(){
    Node *start=NULL,*new_1,*t,*t2;
    int ch;
    while(1){
        new_1=new Node();
        cout<<"enter the data:";
        cin>>new_1->data;
        if(start==NULL){
            new_1->next=NULL;
            start=new_1;
        }
        else{
            new_1->next=start;
            start=new_1;
        }
        cout<<"do u want to continue: 1 means no and for any other number it means yes:";
        cin>>ch;
        if(ch==1){
            break;
        }
    }
    Node *new_2=new Node();
    cout<<"enter the data to be inserted:";
    cin>>new_2->data;
    int loc;
    cout<<"enter the location where u want to insert:";
    cin>>loc;
    if(loc==0){
        new_2->next=start;
        start=new_2;
    }
    else{
        t=start;
        for(int i=0;i<=loc-2;i++){
            t=t->next;
        }
        new_2->next=t->next;
        t->next=new_2;
    }
    t2=start;
    while(t2){
        cout<<t2->data<<" ";
        t2=t2->next;
    }
    return 0;
}