//Factorial program

#include<iostream>
using namespace std;

//using recursion
int factorial(int a){
    if(a>1){
        return a * factorial(a-1);
    }
    else{
        return 1;
    }
}

//using simple method 
int main(){
    int fact = 1;
    int n;
    cin>>n;
    while(n>1){
        fact = fact * n;
        --n;
    }
    cout<<"factorial is "<<fact<<endl;
    return 0;
}