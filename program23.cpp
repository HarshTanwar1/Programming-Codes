// (1). last and first occurence of an element in an array  BY USING BINARY SEARCH

// (2). After this you print the number of ocxcurence


#include<iostream>
#include<algorithm>
using namespace std;



int firstoccurence(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return s ;
}


int lastoccurence(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return s-1;
}



int main(){
    int n;
    cout<<"Enter number of elements do you want to enter : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"your sorted array is [";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
    int key;
    cout<<"Enter the key element : ";
    cin>>key;
    int firstO =  firstoccurence(arr,n,key);
    int lastO = lastoccurence(arr,n,key);
    int totalO = (lastO - firstO) + 1;
    cout<<"first occurence is at index : "<<firstO<<endl;
    cout<<"last occurence is at index : "<<lastO<<endl;
    cout<<"total number of occurence : "<<totalO<<endl;
    return 0;
}