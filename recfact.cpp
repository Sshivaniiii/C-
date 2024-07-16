#include <iostream>
using namespace std;
int fact(int n){
    if(n>1){
        return n*fact(n-1);
    }
    else{
        return 1;

    }
}
int main(){
    int a;
    cout<<"enter value of a";
    cin>>a;
    cout<<fact(a);
}