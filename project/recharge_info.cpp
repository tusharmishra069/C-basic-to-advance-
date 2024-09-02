// question 
// Test case1: Input
// Enter the day: 50
// Enter the msg: 80
// Enter the data: 1.2
// Enter the calls: 2500
// Output:
// 34 days left for expire
// yet to msg 20
// yet to data use 0.8
// yet to call 500

// Test case2: Input
// Enter the day: 80
// Enter the msg: 101
// Enter the data: 2.2
// Enter the calls: 3001
// Output:
// 4 days left for expire
// msg failed
// speed reduced bcs of exceed ur limit
// calls could not be connected. kindly top up

// Test case3: Input
// Enter the day: 85

// Output:
// Your plan expired. kindly recharge.

// strictly use the class, object ,fuction


#include<iostream>
#include<bits/stdc++.h>

using namespace std;



class recharge{
    public:
    int day;
    int msg;
    float data;
    int call;
    void IN(){
        if(day>=84){
        cin>>day;
        }
        if(day<=84){
            cin>>msg>>data>>call;
        }
    }
    int reminder(){
        if(day>84){
            cout<<"Your plan expired. kindly recharge.";
            return 0;
        }
        else if(day<=84 && msg>100 && data>2.0 && call>3000){
            cout<<84-day<<endl;
            cout<<"message failed"<<endl;
            cout<<"speed reduce , your data is over"<<endl;
            cout<<"call cannot connected"<<endl;
        }
        else if(day<84){
            cout<<(84-day)<<endl<<(100-msg)<<endl<<(2.0-data)<<endl<<(3000-call);
        }
    }

};
int main(){

    recharge obj;
    obj.IN();
    obj.reminder();
}