//Armstrong number program 
//( eg. 153 = 1*1*1 + 5*5*5 + 3*3*3 = there sum is also equal to 153 = 1+125+27 = 153)

#include<iostream>
using namespace std;

int main(){
    int n ,o, rem,num = 0;
    cout<<"Enter any number to check it is armstrong number or not : ";
    cin>>n;
    o = n;
    while(o!=0){
        rem = o%10;
        num = num + rem * rem * rem;
        o /= 10;
    }
    if (n == num){
        cout<<n<<" is an Armstrong number \n";
    }
    else{
        cout<<n<<" is not an Armstrong number \n ";
    }

    
    return 0;
}