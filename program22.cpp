#include<iostream>
using namespace std;


void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort012(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        // int step = 0;
        // cout<<"step "<<++step<<endl;
        // printarray( arr, 9);
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

       if (arr[mid]==1){
            mid++;
       } 
       if(arr[mid]==2 && mid<= high){
            swap(arr[mid],arr[high]);
            high--;
            
       }
    }
}


int main(){
    int arr[9] = {0,1,2,0,1,2,0,1,2};
    printarray(arr,9);
    cout<<"After sorting the array of elements 0,1 and 2 : "<<endl;
    sort012(arr,9);
    printarray(arr,9);
    return 0;
}