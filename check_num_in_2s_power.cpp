#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;
    int check = 0;
    int ans = 1;



    for(int i = 1;i <= 30 ; i++){
        if(n == ans){
            cout<<"True\n";
            check = check + 1;
        }
        if (ans < INT_MAX/2){
        ans = 2 * ans;
        }
    }
    if (check == 0){
        cout<<"False\n";   
    }



    // for (int i = 0; i <= 30; i++){
    //    int ans = pow(2,i);
    //     if (ans == n){
    //         cout<<"True it is present in power of 2\n";
    //         ++check;
    //     }
    // }
    // if(check == 0){
    //     cout<<"False\n";
    // }

    return 0;
}