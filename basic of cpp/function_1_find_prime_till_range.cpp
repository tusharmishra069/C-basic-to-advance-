#include<iostream>
using namespace std;

// question find the all prime no. between the range

void range_prime(){
    int lb,ub;
    cin>>lb>>ub;
    for(int i=lb;i<=ub;i++){
        int count=2;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==2){
            cout<<i<<" ";
        }
    }
}
int main(){
    range_prime();
}