// program to check the unique occurence of elements


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;





bool uniqueoccurencecheck(int arr[],int n){
    vector<int>ans;
    int size = n;
    sort (arr,arr+n);
    int i = 0;
    while(i<size){
        int count = 1;
        for(int j = i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ++count;
            }
            else{
                break;
            }
        }
        i = i + count;
        ans.push_back(count);
    }
    sort(ans.begin(),ans.end());
    size = ans.size();
    for(int i = 0;i<size-1;i++){
        if(ans[i] == ans[i+1]){
            return false;
        }
    }
    return true;
 
}






int main(){
    int n;
    cout<<"Enter number of elements do you want to enter : ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is [";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<"]"<<endl;
    bool check = uniqueoccurencecheck(arr,n);
    if(check){
        cout<<"Occurence of each element is Unique "<<endl;
    }
    else{
        cout<<"not Unique Occurence "<<endl;
    }
    return 0;
}