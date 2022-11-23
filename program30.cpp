// Binary to Decimal


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Binary digits : ";
    cin>>n;
    int digit;
    int ans = 0;
    int i = 0;
    while(n!=0){
        digit = n%10;
        if(digit == 1){
            ans += pow(2,i);
        }
            i++;
            n = n/10;
    }
    cout<<"Your Decimal value : "<<ans<<endl; 
    return 0;
}