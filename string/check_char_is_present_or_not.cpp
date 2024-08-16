#include<iostream>
#include<string>
using namespace std;


// question get one string as a input, check wheter the char is present or not, then count for the particular char that how many
// times its present

int main(){
    string character;
    int count=0;
    char choice;
    cout<<"enter the string:- ";
    cin>>character;
    cout<<"choice the char:- ";
    cin>>choice;
    for (int i = 0; i < choice; i++)
    {
        if (choice==character[i])
        {
            count = count+1;
        }
    }
    cout<<"no. of times: "<<count<<endl;
    if (count == 0)
    {
        cout<<"not present"<<endl;
    }
    else{
        cout<<"present"<<endl;
    }
}