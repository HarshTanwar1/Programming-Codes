// Search in a Sorted and Rotated arrray



#include<iostream>
using namespace std;



void find(int arr[],int n,int key){
    cout<<"Your element is at index : ";
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if (arr[mid]==key){
            cout<<mid<<endl;
        }
        if(arr[s]<arr[mid]){
            if(key>arr[s] && key<arr[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(arr[mid]<key && arr[e]>key){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }

}





int main(){
    int n ;
    cout<<"Enter how many elements do you want to enter in an arry : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i <n;i++){
        cin>>arr[i];
    }
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    int key ;
    cout<<"Enter the key : ";
    cin>>key;
    find(arr,n,key);


    return 0;
}