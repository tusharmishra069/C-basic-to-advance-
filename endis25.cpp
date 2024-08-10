#include<iostream>
using namespace std;

// ques the last two digit is 25 

int main(){
    int n;
    cin>>n;
    n = n/10;
    int temp1 = n*(n+1);
    int ans = temp1*100 + 25;
    cout<<ans;
}