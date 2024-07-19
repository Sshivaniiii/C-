#include <iostream>
using namespace std;
int main(){
    int all[5]={10,20,30,40,50};
    int i,sum=0;
    for( i=0;i<=4;i++){
        sum=sum+all[i];
    }
        cout<<sum;
}