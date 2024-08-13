#include<iostream>
using namespace std;

// ques:- test case based question lemon in hand problem 

// senerio

// lemon in hands : 21

// god1 : offered 7
// god2 : offered 7
// god3 : offered 7

// sufficient

// =========================

// lemon in hands : 7

// god1 : offered 7
// god2 : offered 0 need 7
// god3 : offered 0 need 7

// shortage : 14

// ========================

// lemon in hands : 30

// god1 : offered 7
// god2 : offered 7
// god3 : offered 7

// surplus : 14

// ========================

// lemon in hands : 12

// god1 : offered 7
// god2 : offered 5 need 2 more
// god3 : offered 7 need 

// shortage : 9

// ========================


void lemon_case(int n)
{
    if(n<=0){
        cout << "God 1 : needed 7 " << endl;
        cout << "God 2 : needed 7 " << endl;
        cout << "God 3 : needed 7 " << endl;
        cout << "required : 21" << endl;
        return;
    }
    int required_lemon = 21;
    if (n == required_lemon)
    {
        cout << "God 1 : offered 7 " << endl;
        cout << "God 2 : offered 7 " << endl;
        cout << "God 3 : offered 7 " << endl;
        cout << "sufficient" << endl;
    }
    else if (n > required_lemon)
    {
        cout << "God 1 : offered 7 " << endl;
        cout << "God 2 : offered 7 " << endl;
        cout << "God 3 : offered 7 " << endl;
        cout << "surplus : " << (n - required_lemon) << endl;
    }
    else
    {
        int count = n/7;
        int remaining = n%7;
        int i = 1;
        while (i <= count)
        {
            cout << "God " << i << " offered : 7 " << endl;
            i++;
        }
        cout<<"God "<<i<<" offered : "<<remaining<< " needed : "<<(7-remaining)<<endl;
        for (int j = i+1; j <= 3; j++)
        {
            cout << "God " << j << " need : 7" << endl;
        }
        cout << "shortage" << endl;
        cout << "required : " << (required_lemon - n) << endl;
    }
}

int main()
{
    int n;
    cout<<"enter the no. of lemon: ";
    cin >> n;
    lemon_case(n);
}