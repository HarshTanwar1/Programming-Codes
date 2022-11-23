#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows do you want : "<<endl;
    cin>>n;


    

    for(int i=1; i<=n;i++){
        int space = (n-i);
        for (int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int k=n;k>=1;k--){
        int space = (n-k);
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<k;j++){
            cout<<"* ";
        }
        cout<<endl;
    }






    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        int gap = (2*n - 2*i);
        for (int j=0;j<gap;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1;i <= n;i++){
            for(int j = 1;j<=i;j++){
                cout<<"* ";
            }
            int space = 2*n - 2*i;
            for(int j = 1;j<=space;j++){
                cout<<"  ";
            }
            for (int j = 1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
    }
    






    for(int i=1;i<=n;i++){
        int gap = (n-i);
        for(int j=0;j<gap;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        for(int j=0;j<gap;j++){
            cout<<" ";
        }
        cout<<endl;
    }
// stream lit library




    for(int i=1;i<=n;i++){
        for (int j=0;j<n;j++){
            if (j<(n-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }



    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }



    return 0;
}