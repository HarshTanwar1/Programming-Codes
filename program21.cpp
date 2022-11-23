// Sort 0 and 1


#include<iostream>
using namespace std;

void sort0and1(int arr[],int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        if(arr[s]==0){
            s++;
        }
        else if (arr[e]==1){
            e--;
        }
        else if (arr[s]==1 && arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }

}

void printarray(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[6] = {0,1,0,1,0,1};
    printarray(arr,6);
    sort0and1(arr,6);
    cout<<"After sorting the 0 and 1 elements of the array : "<<endl;
    printarray(arr,6);
    return 0;
}