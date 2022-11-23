#include<iostream>
using namespace std;

int main(){
    int x,n,sum = 1;
    cin>>x;
    cout<<"How many times : ";
    cin>>n;
    int multiply = x;
    cout<<"1 + ";
    for(int i = 1;i<n;i++){
        if(i!=(n-1)){
        cout<<x<<"^"<<i<<" + ";
        }
        else{
            cout<<x<<"^"<<i<<endl;
        }
        sum += multiply ;
        multiply *= x;
    }
    cout<<"Sum of this expression : "<<sum;
    return 0;
}