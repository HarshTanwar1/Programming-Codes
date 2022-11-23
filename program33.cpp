// program to find the square Roots BY USING BINARY SEARCH


#include<iostream>
using namespace std;


long long int squareRoot(int n){
    int s = 0;
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    while(s<=e){
        int square = mid * mid;
        if(square == n){
            return mid;
        }
        else if(square>n){
            e = mid - 1;
        }
        else if(square < n){
            ans = mid;
            s = mid + 1;
        }
        int mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter of which number you have to find square root : ";
    cin>>n;
    int arr[n];
    int number = 1;
    for(int i = 0;i<n;i++){
        arr[i]=number;
        ++number;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index =squareRoot(n);
    cout<<"Square root : "<<arr[index-1]<<endl;
    return 0;
}