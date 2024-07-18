#include <iostream>
using namespace std;
int lab(int n){
    if(n==0){
        return 0;
    }
    else{
        lab(n/2);
        cout<<n%2;
    }
}
int main(){
    int  lack,a=6;
    lack=lab(a);
}