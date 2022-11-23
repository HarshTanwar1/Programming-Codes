#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;






    
    // for(int i = 1; i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         if(j==1 || j==i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     int space = (2*n - 2*i);
    //     for(;space>=1;space--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= i;j++){
    //         if(j==1 || j==i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=n;i>=1;i--){
    //     for(int j = 1; j<=n;j++){
    //         if(j==1 || j==i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     int space = (2*n - 2*i);
    //     for(int j = 1;j<=space;j++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j>=1;j--){
    //         if(j==1 || j==i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }








    // for (int i = 1;i<=n;i++){
    //     for(int space = 1;space <=(n-i);space++){
    //         cout<<"  ";
    //     }
    //     for (int j = 1;j<=n;j++){
    //         if (i==1 || i==n || j==1 || j==n){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i <= 3){
    //     int j = 1;
    //     while(j <= n){
    //         if ((i+j)%4==0){
    //             cout<<"* ";
    //         }
    //         else if(i==2 && j%4==0 ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //         j++;
    //     }

    //     i++;
    //     cout<<endl;
    // }









//STAR PATTERN 
    // int i = 1;
    // while(i<=n){
    //     int space = (n-i);
    //     while(space >= 1){
    //         cout<<"  ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     int J = 1;
    //     while(J<i){
    //         cout<<"*"<<" ";
    //         J++;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int I = n;
    // while(I>=1){
    //     int gap = (n - I);
    //     while(gap>=1){
    //         cout<<"  ";
    //         gap--;
    //     }
    //     int J = 1;
    //     while(J<=I){
    //         cout<<"*"<<" ";
    //         J++;
    //     }
    //     int k = 1;
    //     while(k<I){
    //         cout<<"*"<<" ";
    //         k++;
    //     }
    //     I--;
    //     cout<<endl;
    // }







// PALANDROMIC PATTERN
    // int i = 1;
    // while(i<=n){
    //     int space = (n-i);
    //     while (space>=1){
    //         cout<<"  ";
    //         space--;
    //     }
    //     int j = i;
    //     while(j>=1){
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     int J = 2;
    //     while(J<=i){
    //     cout<<J<<" ";
    //     J++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i<=n){
    //     int space = (n-i);
    //     while(space>=1){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i<=n){
    //     int space = (n - i);
    //     while(space>=1){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=n){
    //         cout<<"* ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }







    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         if((i+j)%2 == 0){
    //             cout<<"1 ";
    //         }
    //         else{
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }








    // int i = n;
    // while(i>=1){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     i--;
    //     cout<<endl;
    // }








    // int i = 1;
    // while (i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     int space = (2*n - 2*i);
    //     while(space>=1){
    //          cout<<" ";
    //          space--;
    //     }
    //     int j2 = i;
    //     while(j2>=1){
    //         cout<<j2;
    //         j2--;
    //     }
    //     i++;
    //     cout<<endl;
    // }
    // int I = n;
    // while (I>=1){
    //     int J = 1;
    //     while(J<=I){
    //         cout<<J;
    //         J++;
    //     }
    //     int gap = (2*n - 2*I);
    //     while(gap>=1){
    //         cout<<" ";
    //         gap--;
    //     }
    //     int J2 = 1;
    //     while(J2<=I){
    //         cout<<"*";
    //         J2++;
    //     }
    //     I--;
    //     cout<<endl;
        
    // }








    // int i = 1;
    // while(i <= n){
    //     int space = 1;
    //     while(space <= (n-i)){
    //         cout<<"  ";
    //         space++;
    //     }
    //     int j = (i-1);
    //     while(j>=0){
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     int k = 1;
    //     while(k<i){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     i++;
    //     cout<<endl;
    // }









    // int i = 1;
    // while(i<=n){
    //     int gap = (n-i);
    //     while(gap >= 1 ){
    //         cout<<" ";
    //         gap--;
    //     }
    //     int j = 1;
    //     while (j <= i){
    //         cout<<"* " ;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }











    // int i = 1;
    // while(i<=n){
    //     int space = 1;
    //     while (space <= (n-i)){
    //         cout<<"  ";
    //         space++;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"* ";
    //         j++;
    //     }
    //     int k = (i-1);
    //     while (k>=1){
    //         cout<<"* ";
    //         k--;
    //     }
    //     i++;
    //     cout<<endl;
    // }









    // int i = n;
    // while(i>=1){
    //     int j1 = 1;
    //     while(j1<=i){
    //         cout<<' '<<j1<<' ';
    //         j1++;
    //     }
    //     int star = (2*n - 2*i);
    //     int j2 = 1;
    //     while (j2<=star){
    //         cout<<" * ";
    //         j2++;
    //     }
    //     int j3 = i;
    //     while(j3>=1){
    //         cout<<' '<<j3<<' ';
    //         j3--;
    //     }
    //     i--;
    //     cout<<endl;
    // }







    
    // int i = 1;
    // while (i<= n){
    //     int space = 1;
    //     while(space <= (n-i)){
    //         cout<<"  ";
    //         space++;
    //     }
    //     int j = 1;
    //     while (j<=i){
    //         cout<<j<<" ";
    //         j++;
    //     }

    //     int k = i - 1;
    //     while (k>=1){
    //         cout<<k<<" ";
    //         k--;
    //     }
    //     i++;
    //     cout<<endl;
    // }







    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int space = 1;
    //     while(space <= (n-i)){
    //         cout<<"  ";
    //         space++;
    //     }
    //     int j = 1;
    //     while (j<=i){
    //         cout<<count<<" " ;
    //         count += 1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while (i<=n){
    //     int space = 1;
    //     while(space < (n-i+1)){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     while (j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i<=n){
    //     int space = 1;
    //     while (space < i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     while(j<=(n-i+1)){
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }





    // int i = 1;
    // while(i<=n){
    //     int space = 1;
    //     while(space<i){
    //         cout<<" ";
    //         space++;
    //     }
    //     int j = 1;
    //     while(j<=(n-i+1)){
    //         cout<<"*";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl; 
    // }






    // int i = n;
    // while(i>=1){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     i--;
    //     cout<<endl;
    // }
         

    





    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         if (j<=(n-i)){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }



    // int i = 1;
    // while(i<=n){
    //     char ch = ('A' + n - i);
    //     int j = 1 ;
    //     while (j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // char ch = 'A';
    // while(i<=n){
    //     ch = ('A' + i - 1);
    //     int j = 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     i++;
    //     cout<<endl;
    // }






    // int i = 1;
    // char ch = 'A';
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch += 1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i<=n){
    //     char ch = 'A' + i -1;
    //     int j = 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i = 1;
    // while(i<=n){
    //     char ch = 'A' + i -1;
    //     int j = 0; 
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     i++;
    //     cout<<endl;
    // }






    // int i=1;
    // char ch = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch += 1;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }









    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<char('A' + j - 1)<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }







    // int i = 1; 
    // char ch = 'A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<char(ch + i - 1)<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i=1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<(i - j + 1)<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i=1;
    // while(i<=n){
    //     int j=i;
    //     while(j<2*i){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }









    // int i = 1;
    // while(i<=n){
    //     int count = i;
    //     int j = 1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }






    // int i=1;
    // int count = 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }





    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }








    // int i=1;
    // int count = n*n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count--;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }









    // int n;
    // cin>>n;
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
        
    // }




    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=n;
    //     while(j>=1){
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     i++;
    //     cout<<endl;
    //}
    return 0;
}