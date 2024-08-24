#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// make a two vector arrays and find out the common element in the both the arrays

int main(){
    int n;
    cout<<"size";
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    cout<<"elemet"<<endl;
    for(auto i=0;i<n;i++){
        cin>>v1[i];
    }
    cout<<"element 2"<<endl;
    for(auto j=0;j<n;j++){
        cin>>v2[j];
    }
    // sorted
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    
    vector<int>its;
    int i=0,j=0;

    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            i++;
        }
        else if (v1[i]>v2[j])
        {
            j++;
        }
        else{
        its.push_back(v1[i]);
        i++;
        j++;
        }  
    }
    cout<<"common"<<endl;
    for(int k:its){
        cout<<k<<" ";
    }
}
