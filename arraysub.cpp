#include <iostream>
using namespace std;
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int b[7]={9,8,7,6,5,7,8};
    int i;
    int c[7];
    for(i=0;i<=6;i++){
        c[i]=b[i]-a[i];
        cout<<c[i]<<endl;
    }
}