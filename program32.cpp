// Sum of two numbers without using arithmetic operators(I SOLVED THIS PROBLEM BY THREE DIFFERENT METHODS )


#include<iostream>
using namespace std;


void usingOR(int a,int b){
    int sum = a | b;
    cout<<"Sum is "<<sum<<endl;
}



int sumtwo (int a,int b){
    int carry = b,sum ;
    while(carry != 0){
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    return sum;
}


int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    // THIS IS THE BRUTEFORCE METHOD 
    // for(int i = 1;i<=b;i++){
    //     a++;
    // }
    // cout<<"Sum of these two numbers : "<<a<<endl;

    // THIS IS DONE WITH THE HELP OF & and ^ operators 
    // int result = sumtwo(a,b);
    // cout<<"Sum of these two numbers : "<<result<<endl;

    //THIS IS DONE WITH THE HELP OF |
    usingOR(a,b);


    return 0;
}