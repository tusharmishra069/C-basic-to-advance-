#include<iostream>
using namespace std;

// ques vending machine 

// frooti vending machine

// static:
// intital capacity: 10;
// test case 1
// input:
// how many u want : 5;

// output:

// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti

// enjoy yourb drink

// test2

// input:
// how many u want : 12;

// output:

// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti
// take a frooti

// out of stock: 2

// enjoy your drink



class frooti{
    public:
    int initial_capacity =10;
    
    void vending_machine(){
        frooti obj;
        int num;
        cout<<"enter the no. of frooti u want:- ";
        cin>>num;
        if (num<0)
        {
            cout<<"thanks for the approch!"<<endl;
            cout<<"enter the valid no. "<<endl;
            obj.vending_machine();
        }
        else if (num == 0)
        {
            cout<<"thamk for approching";
        }
        else if (num<initial_capacity)
        {
           for (int i = 1; i < num+1; i++)
            {
            cout<<"take froti"<<"-"<<i<<endl;
            }
            num++;
            cout<<"left capacity:-"<<initial_capacity-num+1<<endl;
            cout<<"enjoy your drink"<<endl;
        }
        else{
            for (int i = 1; i <= 10; i++)
            {
                cout<<"take froti"<<"-"<<i<<endl;
            }
            
            cout<<"out of stock:- "<<initial_capacity-num<<endl;
            cout<<"enjoy your drink"<<endl;
        }
    }      
};

int main(){
    frooti obj;
    obj.vending_machine();
}
