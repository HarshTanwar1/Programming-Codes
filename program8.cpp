// To print the name of any person with getline function of string and show reverse of that string 
// getline function use to take input of spaces in a string datatype

#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<<endl<<endl<<str<<endl<<endl;
    for(int i = str.length();i>=0;i--){
        cout<<str[i];
    }

    return 0;
}