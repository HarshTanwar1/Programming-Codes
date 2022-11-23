//Fibbonacci series programme and its sum 


#include<iostream>
using namespace std;



//using simple method
int main(){
    int a =0, b = 1;
    int n;
    cin>>n;
    int sum = 0;
    while(n>=1){
        int c = a+b;
        cout<<a<<" ";
        sum+=a;
        a = b;
        b = c;
        --n;
    }
    cout<<endl;
    cout<<"fib. series sum is "<<sum<<endl;
    return 0;
}