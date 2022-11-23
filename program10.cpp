//program to find the nearest prime number to the given number 


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int count = 0;
    for(int i = n-1;i>=2;i--){
        for(int j = 2; j<i;i++){
            if (i%j == 0){
                count += 1;
       
            }
            break;
        }
        if(count == 0){
        cout<<"The nearest prime number is "<<i<<endl;
        break;
        }
    }
    return 0;
}