//MOVE ZEROES

 #include<iostream>
 using namespace std;
 
 int main(){
    int arr[6] = {0,1,0,3,12,0};
    cout<<"original array : ";
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    int i = 0;
    for(int j = 0;j<6;j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
    }  
    cout<<"\nAfter moves zeroes : ";
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }