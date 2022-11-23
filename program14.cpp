// program to do complement of decimal number 


#include<iostream>
using namespace std;

int complement(int n){

    int m = n;
    int mask = 0;
    if (n == 0){
        return 1;
    }
    while(m!=0){
        mask = mask<<1 | 1;
        m = m>>1;
    }
    int ans = mask & (~n);
    return ans;

}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int show = complement(n);
    cout<<"Its complement is "<<show<<endl;
    return 0;
}