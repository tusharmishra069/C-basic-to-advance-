#include<iostream>
using namespace std;

int linearSearch(int a[], int n, int key){
    for(int i = 0; i<n; i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int index = linearSearch(a,n,key);

    cout<<"your element in the  array at index: "<<index<<endl;

}