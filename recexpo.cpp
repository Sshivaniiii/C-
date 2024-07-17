#include <iostream>
using namespace std;
int exppo(int a,int b){
    if(b==0){
        return 1;
    }
    else {
        return a*exppo(a,b-1);
    }
}
int main(){
    int m,n;
    cout<<"enter value of m"<<endl<<"enter value of n"<<endl;
    cin>>m>>n;
    cout<<exppo(m,n);
}