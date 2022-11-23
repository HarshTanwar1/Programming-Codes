//Selection sort  = use this sorting when you have small size array , it is a stable algorithm



#include<iostream>
using namespace std;


void SelectionSortAscending(int arr[],int n){

    for(int i = 0; i<n-1;i++){
        int minindex = i;
        for(int j = i+1;j<n;j++){
            if (arr[minindex] > arr[j]){
                minindex = j;
            }
        }
        swap(arr[i],arr[minindex]);
    }

}


void SelectionSortDecending(int arr[],int n );



int printelements(int arr[],int n){
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}


int setelements(int arr[],int n){
    for(int i = 0;i <n;i++){
        cin>>arr[i];
    }
    return 0;
}


int main(){
    int n ;
    cout<<"Enter how many elements do you want to enter in an arry : ";
    cin>>n;
    int arr[n];
    setelements(arr,n);   
    SelectionSortAscending(arr,n);
    printelements(arr,n);
    SelectionSortDecending(arr,n);
    printelements(arr,n);
    return 0;
}


void SelectionSortDecending(int arr[],int n ){
    
    for (int i = 0; i<n-1;i++){
        int maxindex = i;
        for (int j = i+1;j<n;j++){
            if (arr[maxindex] < arr[j]){
                maxindex = j;
            }
        }
        swap(arr[i],arr[maxindex]);
    }

}