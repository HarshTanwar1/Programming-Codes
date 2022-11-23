//program to find all the prime numbers before a particular number (given by the user)

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter any one number : "<<endl;
    cin>>n;
    int j;
    if (n == 0 || n==1){
        cout<<"Sorry , 0 and 1 are the non prime numbers "<<endl;
    }

    for (int i = 1;i<=n;i++){
        for( j = 2;j<i;j++){
            if (i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<" ";
        }
    }

    return 0;
}