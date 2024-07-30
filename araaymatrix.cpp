#include <iostream>
using namespace std;
int main(){
    int i,j;
    int a[2][2];
    int b[2][2];
    int c[2][2];
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cout<<"enter the elements"<<endl;
        cin>>a[i][j];
        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cout<<"enter the elements"<<endl;
            cin>>b[i][j];
}
    }
for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<endl;
        }
}
}
