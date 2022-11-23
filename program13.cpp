// Insertion sort = you should use this algrithm because it is adaptable and stable algorithm




#include<iostream>
using namespace std;


void InsertionSortAscending(int arr[],int n);


int printelements(int arr[],int n);


int setelements(int arr[],int n);


int main(){
    int n ;
    cout<<"Enter how many elements do you want to enter in an arry : ";
    cin>>n;
    int arr[n];
    setelements(arr,n);   
    InsertionSortAscending(arr,n);
    printelements(arr,n);
    return 0;
}


void InsertionSortAscending(int arr[],int n){

    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for( ; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }

            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

}





int printelements(int arr[],int n){
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}



int setelements(int arr[],int n){
    for(int i = 0;i <n;i++){
        cin>>arr[i];
    }
    return 0;
}