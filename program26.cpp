// kitne number of one bits hai 



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n!=0){                // 10 = 1010 ye total 0 nhi hojata tab tak chalega 
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout<<"number of 1 bits in this number is "<<count<<endl;
    return 0;
}