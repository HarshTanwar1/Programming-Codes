#include<iostream>
using namespace std;



void sbarr(int arr[],int n){
       for(int sp=0;sp<n;sp++){
        for(int ep = sp; ep<n;ep++){ 
            for(int i=sp;i<=ep;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){

    int n;
    
    cout<<"Enter how many elements do you want to insert in an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please Enter your elements :)"<<endl;

    for (int  i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    cout<<"Finally, Your array is [";

    for (int i = 0; i < n; i++)
    {    
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
    



    int current_Max = arr[0];
    int current_Min = arr[0];
 

    for (int i = 0; i < n; i++)
    {
        if (current_Max<arr[i]){
                current_Max = arr[i];
        }
                if (current_Min>arr[i]){
                current_Min = arr[i];
        }

    }

    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }

// Here I start the concept of Subarrays
// First I print all the subarrys 


    cout<<"Your Maximum element in this given array is "<<current_Max<<endl;
    cout<<"Your Minimum element in this given array is "<<current_Min<<endl;
    cout<<"The sum of all elements of this array is "<<sum<<endl;
    cout<<"The all Subarray of the given array is :\n";
    sbarr(arr,n);
 
 
 
    return 0;
    }