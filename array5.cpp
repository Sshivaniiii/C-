#include <iostream>
using namespace std;
int main(){
    int a[5]= {3,-8,-6,9,10};
    int positive,negative;
    for(int i=0;i<=4;i++){
    if(a[i]>=0){
        cout<<"it is positive";
    } else{
        cout<<"it is negative";
    }
    cout<<a[i]<<endl;
    }
}