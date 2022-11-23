// print ASCII value of any digit  



#include<iostream>
using namespace std;

// int main(){
//     char a;
//     cin>>a;
//     cout<<"ASCII value of this is "<<int(a)<<endl;
//     return 0;
// }



//BY USING GET() FUNCTION (ye function space ki bhi ascii value dedega ,ye character return
// hai , issliye int a bhi character ban gya)
int main(){
    int a ;
    a = cin.get();
    cout<<"ASCII value of this is "<<a<<endl;
    return 0;
}