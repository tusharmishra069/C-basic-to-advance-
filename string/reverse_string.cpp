#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// ques reverse the string

int main(){
    string s;
    getline(cin,s);
    cout<<"you entered:- "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s;
}
