#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,i,range,num;
    cout<<"enter range";
    cin>>num;
    cout<<a<<endl<<b<<endl;
    for(i=1;i<=num;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<endl;
    }

}