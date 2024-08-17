#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//  string rotation 
// left rotation:- rotating toward lefts which means right to left
//   abc = bca 
//  abcx = bcxa
// right rotation:- rotating toward right which means left to right
//  abc = cab

// question rotate the string element 
int main(){
    string s="abc";//right rotation
    cout<<"original string: "<<s<<endl;
    int l = s.length();
    cout<<"right rotation: "<<s[l-1]<<s.substr(0,l-1)<<endl;
    
    //left rotation 
    cout<<"left rotation: "<<s.substr(1,l)<<s[0];
}