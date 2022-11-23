// pair sum program 

#include<iostream>
using namespace std;

void pairsum(int arr[],int n,int m){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+arr[j]==m){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        // cout<<endl;
    }
}



int main(){
    int n;
    cout<<"Enter number of elements do you want to enter : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is [";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
    int m;
    cout<<"Enter the pair sum value : ";
    cin>>m;
    pairsum(arr,n,m);

    return 0;
}