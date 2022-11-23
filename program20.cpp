// triplet sum s


#include<iostream>
using namespace std;



void tripletsum(int arr[],int n,int m){
    for(int i = 0;i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]== m){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
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
    tripletsum(arr,n,m);
    return 0;
}