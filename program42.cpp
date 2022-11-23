// ADD TWO ARRAYS 

#include<iostream>
#include<vector>
using namespace std;



void setarr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

std::vector<int>reverse(std::vector<int>v){
    int s = 0;
    int e = v.size() - 1;
    while(s<=e){
        swap(v[s++],v[e--]);
    }
    return v;
}


int addarr(int arr1[],int n,int arr2[],int m){
    vector<int> ans;
    int carry =0,sum = 0;
    int i = n-1,j = m-1;
    while(i>=0 && j>=0){
        sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    // first case 
    while(i>=1){
        ans.push_back(arr1[i--]);
    }

    // second case 
    while(j>=1){
        ans.push_back(arr2[j--]);
    }

    // third case
    while(carry != 0){
        sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    int s = 0;
    int e = ans.size() - 1;
    while(s<=e){
        swap(ans[s++],ans[e--]);
    }
    return ans;
}


int main(){
    int n,m;
    cout<<"Enter elements of first array : ";
    cin>>n;
    int arr1[n];
    cout<<"Enter elements of second array : ";
    cin>>m;
    int arr2[m];
    setarr(arr1,n);
    setarr(arr2,m);
    int answer = addarr(arr1,n,arr2,m);
    cout<<"\nsum of the two arrays : ";
    for(int i = 0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }


    return 0;
}