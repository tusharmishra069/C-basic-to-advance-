#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>arr;
vector<int>arr1;
arr={1,2,3};
arr1={5,3,2,7,8};
int n = arr1.size();
int i=0;
vector<int>::iterator itr = arr.begin();
while(i<n-1)
{
    if(*itr==arr1[i])
    {
        cout<<arr1[i]<<endl;
        i++;
        itr=arr.begin();
    }
    else if (itr==arr.end())
    {
        i++;
    }
    itr++;
}
}
