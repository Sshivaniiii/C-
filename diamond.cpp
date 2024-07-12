#include <iostream>
using namespace std;
int main(){
int i,j,k,row;
cout<<"enter row";
cin>>row;
for(i=1;i<=row;i++){
    for(j=1;j<=row-i;j++){
        cout<<" ";
    }
    for(k=1;k<=2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
}
for(i=row;i>=1;i--){
    for(j=row-i;j>=1;j--){
        cout<<" ";
    }
    for(k=2*i-1;k>=1;k--){
        cout<<"*";
    }
    cout<<endl;
}
}