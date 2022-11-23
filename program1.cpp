//Search an element in a sorted and Rotated array
#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s<e){
        if (arr[mid] == key){
            return mid;
        }
        if (arr[s] < arr[mid]){
            if (key >= arr[s] && key <=arr[mid]){
                e = mid - 1;
            }

            else{
                s = mid + 1;
            }          
        }
        else{
            if (arr[mid]<=key && arr[e]>=key){
                s = mid + 1;
            }

            else{
                e = mid - 1;
            }
        }
         mid = s + (e - s)/2;

    }




}





int main(){
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"[ ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ,";
    }
    cout<<"]"<<endl;
    int key;
    cout<<"Enter the element which you want search : ";
    cin>>key;

    int ans = binarySearch(arr,n,key);
    cout<<"your element in this array at index "<<ans;
}