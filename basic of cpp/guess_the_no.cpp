#include<iostream>
using namespace std;
//no. guess game

int main(){
int actual_number=6;
    int count=0;
     while(true){
        int guess;
        cout<<"guess a number"<<endl;
        cin>>guess;
        if(guess == actual_number){
            count++;
            cout<<"correct guess"<<endl;
            cout<<"you took "<<count<<" guesses"<<endl;
            break;
        }else if(guess<actual_number){
            cout<<"high"<<endl;
            count++;
        }else{
            cout<<"low"<<endl;
            count++;
        }
    }
}
