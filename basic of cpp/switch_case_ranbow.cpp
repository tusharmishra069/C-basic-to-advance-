#include<iostream>
using namespace  std;

//using a switch case make a ranbow choice that throws the output according to the initial

int main(){
    char c ;
    cout<<"enter ut choice:- ";
    cin>>c;
    c = tolower(c);
    switch(c){
        case 'v':
        cout<<"its violet";
        break;
        case 'i':
        cout<<"its indigo";
        break;
        case 'b':
        cout<<"its blue";
        break;
        case 'g':
        cout<<"its green";
        break;
        case 'y':
        cout<<"its yellow";
        break;
        case 'o':
        cout<<"its orange";
        break;
        case 'r':
        cout<<"its red";
        break;
        default:
        cout<<"default case";
    }
}