// Intersection of two arrays (condition is that the all elements of the arrays are in ascending order)



#include<iostream>
#include<climits>
using namespace std;



// optimized way
void intersection(int arr1[],int arr2[],int n,int m){
    cout<<"Intersected elements by optimzed function : ";
    int i = 0, j = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++,j++;
        }
        else{
            j++;
        }
    }
    cout<<endl;

}



// Brute force (but it applicable on non ascending order also)
void Bruteforce(int arr1[],int arr2[],int n,int m){
    cout<<"Intersection elements by Bruteforce function : ";
    for(int i = 0;i<n;i++){
        int element = arr1[i];
        for(int j = 0;j<m;j++){
            if(arr2[j]==element){
                cout<<element<<" ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
        cout<<endl;


}





int main(){
    int n,m;
    cout<<"Enter number of elements of arr1 : ";
    cin>>n;
    int arr1[n];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter number of elements of arr2 : ";
    cin>>m;
    int arr2[m];
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"arr1 = [";
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" , ";
    }
    cout<<"]"<<endl;
    cout<<"arr2 = [";
    for(int i = 0;i<m;i++){
        cout<<arr2[i]<<" , ";
    }
    cout<<"]"<<endl;
    intersection(arr1,arr2,n,m);
    Bruteforce(arr1,arr2,n,m);
    return 0;
}