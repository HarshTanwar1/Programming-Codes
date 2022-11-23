// PASCAL'S TRIANGLE OR FLOYED'S TRIANGLE


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int space = n-i;
        for(space;space>=1;space--){
            cout<<" ";
        }
        int num = 1;
        for(int j = 0;j<=i;j++){
            cout<<num<<" ";
            num = num*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}