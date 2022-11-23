#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }
        
        if (arr[mid]<key){
            start = mid +1;
        }

        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}


int main(){
    int arr[7] = {12,43,21,2,5,32,67};
    sort(arr,arr+7);
    int key;
    cout<<"Which element do you want to find :";
    cin>>key;
    int index_value = binarySearch(arr,7,key);
    cout<<"your element is place in this array at "<<index_value + 1<<" place"<<endl;


}