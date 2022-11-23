#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n ;
    cout<<"enter the number digits : "<<endl;
    cin>>n;
    int ans = 0;
    while (n != 0){
        int digit = n%10;
        if (ans >= INT_MAX/10 || ans <= INT_MIN/10){
            break;
        }
        ans = ans * 10 + digit;
        n /= 10;
    }
    cout<<ans;

    // for (int i = 0; i<10;i++){

    //         break;
        
    //     cout<<"Hello World\n";
    // }
    // cout<<"break kaam kar gya \n";


    return 0;
}