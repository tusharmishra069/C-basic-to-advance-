#include<iostream>
using namespace std;

// ques take string and a no. assoicated with the string as an input if sum of squares of digit of the no is odd rotate the string by left two poisition 
// if it is even right by two
// tc1
// string abc : 222 no rotate right by two 
// output will be bca

// tc2:
// string  hello :111 rotate left by two 
// output llohe


int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int sum=0;
    while(n){
        int ld = n%10;
        sum = sum+(ld*ld);
        n=n/10;
    }
    if(sum%2==0){
        string temp = "";
        int l = s.length();
        temp = temp + s.substr(l-2,2) + s.substr(0,l-2);
        cout<<temp<<endl;
    }else{
        string temp = "";
        int l = s.length();
        temp = temp + s.substr(2,l-2) + s.substr(0, 2);
        cout << temp << endl;
    }
}