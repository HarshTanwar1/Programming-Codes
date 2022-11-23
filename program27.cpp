// total number of set bits in a and b
//  for eg. a = 2 ----> 10
//          b = 3 ----> 11 
//                      to dono me kitne 1 h vhi batana h , yha 3 one h to OUTPUT = 3

#include<iostream>
using namespace std;

int onecount(int n){
    int count = 0;
    while(n!=0){
        if(n&1){            // agar 0 bits kitni h ye puchta to 0 ke sath OR karate 
            count++;
        }
        n = n>>1;
    }
    return count;
}


int main(){
    int a ,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int firstcount = onecount(a);
    int secondcount = onecount(b);
    cout<<"Total number of set bits in a and b is "<<firstcount + secondcount<<endl;

    return 0;
}