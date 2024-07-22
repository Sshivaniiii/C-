#include <iostream>
using namespace std;
int main(){
    int a[5]= {3,8,6,9,10};
    int even,odd;
    for(int i=0;i<=4;i++){
    if(a[i]%2==0){
        cout<<"it is even";
    } else{
        cout<<"it is odd";
    }
    cout<<a[i]<<endl;
    }
}