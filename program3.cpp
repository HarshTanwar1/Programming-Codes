// program to find the permutation and combination 



#include<iostream>
using namespace std;


int fact(int a){
    if (a>1){
        return a * fact(a-1);
    }
    else{
        return 1;
    }

}


int main(){
    int n,r,choice,n1,n2,n3;
    cout<<"Enter the value of n and r respectively : ";
    abc:
    cin>>n>>r;
    if (n<r){
        cout<<"n should be greater than or equal to r ,write it again "<<endl;
        goto abc;
    }
    cout<<"1. Permutation \n2. Combination\nEnter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:
            n1 = fact(n);
            n2 = fact(n-r);
            n3 = n1/n2;
            cout<<"Permutation is "<<n3<<endl;   
            break;        
        case 2:
            n1 = fact(n);
            n2 = fact(n-r)*fact(r);
            n3 = n1/n2;
            cout<<"combination is "<<n3<<endl;           
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }

    return 0;
}