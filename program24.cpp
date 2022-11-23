// peak element of Mountain array BY USING BINARY SEARCH 


#include<iostream>
using namespace std;


void Peakelement(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
     while(s<e){
        if(arr[mid]<arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
     }
     cout<<"Peak element of this mountain array : "<<arr[s]<<endl;
}


int main(){
    int arr [5] = {2,5,90,10,1};
    Peakelement(arr,5);
    return 0;
}