#include <iostream>
using namespace std;
int main(){
     int a,b,power=1,i;
     cout<<"enter value of a"<<"enter value of b"<<endl;
     cin>>a>>b;
     for(i=1;i<=b;i++){
        power=power*a;
     }
     cout<<power;
}
     