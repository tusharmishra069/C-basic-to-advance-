#include<iostream>
using namespace std;

// perfect number
class perfect{
    public:
    int n,sum;
    int check(){
        cout<<"enter the no. you want to check: ";
        cin>>n;
        int sum =0;
        for(int i=1;i<n;i++){
            if (n%i==0)
            {
                sum=sum+i;
            }
        }
        return sum;
    }
};
int main(){
    perfect obj;
    int s = obj.check();
    if (s==obj.n)
    {
        cout<<"perfect no.";
    }
    else{
        cout<<"not perfect";
    }
    
}