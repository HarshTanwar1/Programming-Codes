// series question ITPS 


#include<iostream>
using namespace std;

int main(){
    int x,n;
    cout<<"Enter value of x : ";
    cin>>x;
    cout<<"How many expressions till you run : ";
    cin>>n;
    float sum = 1;
    cout<<"1 + ";
    for(int i = 1;i<n;i++){
        if(i==(n-1)){
            cout<<x<<"/"<<i;
        }
        else{
            cout<<x<<"/"<<i<<" + ";
        }
        sum +=x/(float)i;
    }   
    cout<<"\nSum of this expression : "<<sum<<endl;
    return 0;
}