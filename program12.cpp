// Bubble Sort  = it is a stable algorithm




#include<iostream>
using namespace std;


void BubbleSortAscending(int arr[],int n){

    for(int i = 1;i<n;i++){
        bool swapped = false;
        for(int j = 0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }

}


int BubbleSortDecending(int arr[],int n );



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
    BubbleSortAscending(arr,n);
    printelements(arr,n);
    BubbleSortDecending(arr,n);
    printelements(arr,n);
    return 0;
}


int BubbleSortDecending(int arr[],int n ){
    
    for(int i = 1;i<n;i++){
        bool swapped = false;
        for(int j = 0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }

}