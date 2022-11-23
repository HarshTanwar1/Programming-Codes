// program to check any number is in 2**n or not 


#include<iostream>
#include<limits.h>
using namespace std;


bool check (int n){
    int ans = 1;
    for(int i = 0;i<=30;i++){
        if(ans == n){
            return true;
        }
        if(ans < INT_MAX/2){
            ans = ans * 2;
        }
    }
    return false;
}



int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    bool result = check(n);
    if (result)
    cout<<"Your number is in 2**n"<<endl;
    else
    cout<<"your number is not in this "<<endl;
    return 0;
}