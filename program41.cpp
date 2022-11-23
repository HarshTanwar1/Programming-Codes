// CHECK AN ARRAY IS SORTED AND ROTATED OR NOT 



#include<iostream>
using namespace std;

bool check(int arr[],int n){
    int count = 0;
    for(int i = 1;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }    
    return count<=1;
}


int main(){
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your arr is sorted or not : "<<check(arr,n)<<endl;

    return 0;
}