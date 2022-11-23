//count number of digits , reverse them , sum ,product of any number 


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n,rem,count=0,reverse=0,sum=0,product=1;
    cout<<"Enter any number : ";
    cin>>n;
    while(n!=0){
        if (n < INT_MAX/10)
        rem = n%10;
        count++;
        reverse = reverse * 10 + rem;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    cout<<"total number of digits : "<<count<<endl;
    cout<<"reversing the number : "<<reverse<<endl;
    cout<<"sum of each digits : "<<sum<<endl;
    cout<<"product of each digits : "<<product<<endl;
    return 0;
}