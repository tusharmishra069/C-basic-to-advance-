#include<iostream>
using  namespace std;

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (i==1||i==n)
            {
                cout << "* ";
            }
            else
            {
                if(k==1 || k==2*i-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout << endl;
    }
}
