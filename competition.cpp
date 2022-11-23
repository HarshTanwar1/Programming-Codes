 #include<iostream>
 using namespace std;

 int main(){
    int n,amount , p,b;
    cin>>n;
    while(n>0){
        cin>>amount>>p>>b;
        if(amount<=p && amount<=b){
            cout<<"NOTHING"<<endl;
        }
        else if(amount>=p && amount<=b){
            cout<<"PIZZA"<<endl;
        }
        else if(amount>=b && amount<=p){
            cout<<"BROWNIE"<<endl;
        }
        n--;
    }
    return 0;
 }