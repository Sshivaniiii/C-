#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,5};
    int c[5];
    int i,j;
    for(i=0;i<=4;i++){
    c[i]=a[i]+b[i];
    cout<<c[i]<<endl;
    }
}