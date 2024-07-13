#include <iostream>
using namespace std;
int main(){
    int num,rev=0,n;
    cout<<"enter value of num";
    cin>>num;
    while(num>0){
        n=num%10;
        rev=rev*10+n;
        num=num/10;
}
cout<<rev;
}