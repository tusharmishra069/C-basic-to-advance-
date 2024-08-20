#include<iostream>
using namespace std;

// happy number
// a happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit.
// example : 7,28,32

class happy{
    public:
    int s=0;
    int sum(int n)
    {
        int d=0;
        s=0;
        while(n>0)
        {
        d=n%10;
        s=s+(d*d);
        n=n/10;
        }
        return s;
    }
};

int main()
{
    happy obj;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int s1 = obj.sum(n);
    int t=n;
    while (true)
    {
        if(s1==1)
        {
        cout<<n<<" is a happy number"<<endl;
        break;
        }
        else if(s1==n)
        {
        cout<<n<<" is not a happy number"<<endl;
        break;
        }
        else
        {
            s1=obj.sum(s1);
        }
    }
}