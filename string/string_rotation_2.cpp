#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// string rotation for 2 index

int main(){
    string s;//right rotation
    cout<<"enter th string: "<<endl;
    cin>>s;
    cout<<"original string: "<<s<<endl;
    int l = s.length();
    cout<<"right rotation: "<<s[l-2]<<s[l-1]<<s.substr(0,l-2)<<endl;
    
    //left rotation 
    cout<<"left rotation: "<<(s.substr(2,l-2)+s[0]+s[1]);
}