#include <iostream>
using namespace std;
int main(){
int array[5]={1,3,5,7,9};
int m=9,i;
int n=sizeof (array)/sizeof (array[0]);
for(i=0;i<=n;i++){
    if(array[i]==m){
    cout<<"element found at "<<i;
    }
}
}