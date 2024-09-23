#include<iostream>
using namespace std;

//binary search


//bubble sort because we have to sort the array before applying binary search
void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

//function for binary search
int binarySearch(int a[], int n, int key){
    //pointer variable
    int s=0; 
    int e=n;
    while(s<=e){ 
        int mid = (s+e)/2;
        if(a[mid]==key){
            return mid; // agar mid element key se match karta hai toh mid return karega
        }
        else if(a[mid]>key){
            e = mid-1;  // agar mid se chota hai ending point shift hoke mid-1 index me chala jayega 
        }
        else{
            s = mid+1; // agar mid se bada hai to starting pointer shift hoke mid+1 index me chala jayega 
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

    bubbleSort(a,n);

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int index = binarySearch(a,n,key);

    cout<<"your element in the  array at index: "<<index;
}