// program to compare the two numbers without using comparison operator


#include<iostream>
using namespace std;

void UsingXor(int a,int b){
    cout<<"By using Xor method : ";
    if(a^b){
        cout<<"Not Same"<<endl;
    }
    else{
        cout<<"Same"<<endl;
    }
}


void UsingSubtraction(int a,int b){
    cout<<"By using Subtraction method : ";
    if(!(a-b)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
}




int main(){
    int a,b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    UsingXor(a,b);
    UsingSubtraction(a,b);
    return 0;
}