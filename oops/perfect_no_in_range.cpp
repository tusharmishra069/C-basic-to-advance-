#include<iostream>
using namespace std;

// perfect no in between the range that is given by the user

class perfect{
    public:
    int sum(int i)
    {
        int s=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                s=s+j;
            }
        }
        return s;
    }
};
int main(){
    perfect obj;
    int start,end,s1;
    cout<<"enter start and end values"<<endl;
    cin>>start>>end;
    for(int i=start;i<=end;i++) 
    {
        int t=i;
       s1=obj.sum(i);
    if(s1==t)
    {
        cout<<t<<endl;
    }
    }
}
