// maximum kth elements in an array 

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

    // int a,b;
    // cin>>a>>b;
    // for(int i = 1;i<=b;i++){
    //     a++;
    // }
    // cout<<"sum is "<<a<<endl;

    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"\nKth maximum elements are : ";
    for(int i = (n-k);i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}