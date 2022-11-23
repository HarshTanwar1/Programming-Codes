// LCM and HCF/GCF  and its all factors 




#include<iostream>
#include<algorithm>
using namespace std;

void LCM(int a, int b){
    int i = a;
    while(i<=a*b){
        if(i%a==0 and i%b==0){
            cout<<"LCM of these two numbers : "<<i<<endl;
            break;
        }
        i++;
    }
}


void HCF(int a,int b){
    cout<<"HCF of these two numers : ";
    for(int i = min(a,b);i>=1;i--){
        if(a%i==0 and b%i==0){
            cout<<i<<endl;
            break;
        }
    }
}


void factors(int a , int b){
    cout<<"Your factors of a : ";
    for(int i = 1;i<=a;i++){
        if(a%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Your factors of b : ";
    for(int i = 1;i<=b;i++){
        if(b%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    factors(a,b);
    LCM(a,b);
    HCF(a,b); 
    return 0;
}