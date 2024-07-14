#include <iostream>
using namespace std;
int hello(int a,int b){
    return a*b;
}
int null(int c,int d){
    return 2*(c+d);
}
int main(){
    int l,b,m,n,area,perimeter;
    cout<<"enter value of l"<<endl;
    cin>>l;
    cout<<"enter value of b"<<endl;
    cin>>b;
    cout<<"enter value of m"<<endl;
     cin>>m;
    cout<<"enter value of n"<<endl;
    cin>>n;
    area=hello(l,b);
    perimeter=null(m,n);
    cout<<area<<endl;
    cout<<perimeter<<endl;
}