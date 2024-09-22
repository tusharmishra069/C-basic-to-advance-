#include<iostream>
using namespace std;

int iteration = 0;
int partition(int a[], int l, int r){
    int pivot = a[l];

    int count = 0;
    for(int i=l+1; i<=r; i++){
        if(a[i]<=pivot){
            count++;
        }
        iteration++;
    }

    //place pivout in the right position

    int pivotindex = l + count;
    swap(a[pivotindex], a[l]);

    //left amnd right pointers
    int i=l, j=r;

    while(i < pivotindex && j > pivotindex){
        while(a[i] <= pivot){
            i++;
            iteration++;
    }

    while( a[j] > pivot){
        j--;
        iteration++;
    }

    if(i < pivotindex && j > pivotindex){
        swap(a[i], a[j]);
        i++;
        j--;
        iteration++;
    }
    }
    return pivotindex;
}

void quickSort(int a[], int l, int r){
    if(l>=r){
        return;
    }

    //partition
    int p = partition(a,l,r);

    //left part sort
    quickSort(a,l,p-1);

    //right part sort
    quickSort(a,p+1,r);
}

int main(){
    // int iteration = 0;
    int l;
    cout<<"Enter the length of the array : ";
    cin>>l;
    int a[l];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<l; i++){
        cin>>a[i];
    }
    cout<<"Unsorted array : ";
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    quickSort(a,0,l-1);
    cout<<"Sorted array : ";
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout << "Number of iterations: " << iteration ;
}