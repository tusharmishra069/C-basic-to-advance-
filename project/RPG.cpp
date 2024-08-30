// while playing rpg game you have to kill monsters. Total number of killed monsters should be the output. Every monster will have inbuilt power by killing the monster bonus will be given. Be a player you will also have your experience.
// constraints
// - first line contains total number of monsters
// - second line will have your experience 
// - corresponding lines will have monsters inbuilt power and bonus
// note - you cannot the monster which is stronger than you 

// Test case 1:
// input:
// 3
// 100
// 100
// 150
// 50
// 200
// 1
// 0

// Test case 2:
// input:
// 2 :  no of mosnster 
// 123 : player power or point
// 78 : 1st monster power 
// 130 : 2nd monster power
// 10 : 1st monster bonous after killing 
// 0 : 2nd monster bonous after killing 
// output :
// 2   how many monster we killed 

// Test case 2:
// input:
// 3 no. of monster 
// 100 player power
// 101 1st monster power
// 100 2nd monster power
// 304 3rd monster power
// 100 1st monster bonus
// 1   2nd monster bonus
// 524  3rd monster bonus 
// output :
// 2


#include<iostream>
using namespace std;

int main(){
    int mypow,nom,mxp;
    int i,j,flag=0,count=0;
    cin>>nom;
    cin>>mypow;
    int arr[nom];
    cout<<"power"<<endl;
    for (int i = 0; i < nom; i++)
    {
        cin>>arr[i];
    }
    int bonus[nom];
    cout<<"bounus"<<endl;
    for (int i = 0; i < nom; i++)
    {
        cin>>bonus[i];
    }
    for (int i = 0; i < nom; i++)
    {
        flag = 1;
        if (mypow>=arr[i])
        {
            mypow=mypow+bonus[i];
            arr[i]=0;
            count =count+1;
        }
        else if(mypow<arr[i]){
            flag=0;
        }
        if(flag==0){
            i=0;
        }  
    }
    cout<<count;
}
