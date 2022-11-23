#include<algorithm>
#include<iostream>
#include<climits>
using namespace std;

// void execute(int arr[],int size){
//     for (int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"successfully executed"<<endl;
// }

int givemax(int arr[],int n){
    int max=  INT_MIN;
    for (int i=0;i<n;i++){
            if (arr[i]>max){
                arr[i]=max;
            }
     }
     return max;
}

 int main(){
        int arr[5] = {12,34,22,11,4};
        sort(arr,arr + 5);
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
 
        int arr[10];
        fill_n(arr,9,2);
        for(int i = 0;i<10;i++){
            cout<<arr[i]<<" ";
        }


//     int first[50]={32,14};
//     execute(first,10);
//     int first[6] ;
//     float first[6];
//     char first[9];
//     bool first[8];
//     double first [9];     

    return 0;
}