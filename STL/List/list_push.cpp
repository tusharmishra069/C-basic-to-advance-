#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// there are two fuction to add element in list
//1.push_front() , 2.push_back()

int main(){
    list<int>l{1,2,3};
    cout<<"og list"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }

    //inserting using push_front()

    l.push_front(200);//this function will add element at the front of the list
    cout<<"after push_front"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }
}