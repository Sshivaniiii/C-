#include <iostream>
using namespace std;
int main(){
    int num,rev=0,n,i,row;
    cout<<"enter value of num:";
    cin>>num;
    row=num;
    while(num>0){
        n=num%10;
        rev=rev*10+n;
        num=num/10;

    }
    cout<<rev;
    if(row==rev){
        cout<<"it is palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }
}