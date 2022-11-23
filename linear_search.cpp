#include<iostream>
using namespace std;

void setArr(int myarr[],int size){
    for(int i=0;i<size;i++){
        cin>>myarr[i];
    }
}

void getArr(int myarr[],int size){
    cout<<"Your array is : [";
    int i=0;
    while(i<size){
        cout<<myarr[i]<<" , ";
        i++; 
    }
    cout<<"]"<<endl;
}

    int countNum(int arr[],int size,int key){
        int count=0;
        int i=0;
        while(i<size){
            if(arr[i]==key){
                count+=1;
            }
            i++;
        }
        return count;
    }

    int reverse(int myarr[],int size){
        cout<<"Reversing the array"<<endl; 
        int end = (size-1);
        for (int start=0;start<=end;start++){
            swap(myarr[start],myarr[end]);
            end--;
        }
    }


int main(){

    //SWAPING THE ALTERNATIVE ELEMENTS OF AN ARRAY 
    // int array[6] = {1,2,3,4,5,6};
    // getArr(array,6);
    // int i=0;
    // while(i<6){
    //     swap(array[i],array[i+1]);
    //     i+=2;
    // }
    // cout<<"swap alternate elements of array\n";
    // getArr(array,6);

    



    //REVERSING AN ARRAY 
    // int n;
    // cout<<"Enter the number of array elements : ";
    // cin>>n;
    // int arr[n];
    // setArr(arr,n);
    // getArr(arr,n);
    // reverse(arr,n);
    // getArr(arr,n);
    


    //LINEAR SEARCH IN AN ARRAY
    // cout<<"Enter the number which you want to count : ";
    // int number;
    // cin>>number;
    // int arr[n];
    // setArr(arr,n);
    // getArr(arr,n);
    // int num = countNum(arr,n,number);
    // cout<<number<<" in this array is present "<<num<<" times "<<endl;
    return 0;
}




// int start =0;
// int end = (n-1);
// while (start <= end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;    
// }