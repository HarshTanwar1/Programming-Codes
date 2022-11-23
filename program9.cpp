// program of Harmonic Function 


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to perform the harmonic function : ";
    cin>>n;
    float sum = 0.0;
    cout<<"Expression of Harmonic funtion :"<<endl;
    for(int i = 1;i<=n;i++){
        if(i<n){
            cout<<"1/"<<i<<" + ";
            sum += 1/(float)i;
        }
        if(i==n){
            cout<<"1/"<<i<<endl;
            sum += 1/(float)i;
        }
    }
    cout<<"The sum of Harmonic function is "<<sum<<endl;
    return 0;
}