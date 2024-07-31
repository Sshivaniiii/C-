#include <iostream>
using namespace std;
int main(){
    int i,j,k;
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
            c[i][j]=0;
            for(k=0;k<=1;k++){
                c[i][j]+=a[i][k]*b[k][j];           } 
        }
    }
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cout<<"\t"<<c[i][j];
        }
    cout<<endl;
}
}