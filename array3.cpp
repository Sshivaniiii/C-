#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[3]={6,7,8};
    int c[8];
    int i;
    for(i=0;i<=4;i++){
        c[i]=a[i];
    }
    for(i=0;i<=2;i++){
        c[5+i]=b[i];
    }
    for(i=0;i<=7;i++){
        cout<<c[i]<<" ";
    }
}