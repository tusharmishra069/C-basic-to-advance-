#include<iostream>
using namespace std;

// create a 1-d array and findout fact of the array element using recusrion,
// constrants : array size is between 3-8, element value should be in 1-10

int fact(int n){
    if(n==0 || n==1 || n<0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int count =0;
    if(n<=8 && n>=3){
    int a[n];
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin>>a[i];
            if(a[i] < 1 || a[i] > 10){
                cout<<"invaild, input between 1-10: ";
            }
        } while (a[i] < 1 || a[i] > 10);
        
    }
    for(int i =0;i<n;i++){
        cout<<fact(a[i])<<" ";
    }
    } 
    else{
        cout<<"invaild size";
    }
}