#include <iostream>
using namespace std;
int front(int a) {
    return a*a;
}
int back(int b ){
    return 4*b;
}
int main(){
    int  m,n,area,perimeter;
    cout<<"enter value of m"<<endl;
    cin>>m;
    cout<<"enter value of n"<<endl;
    cin>>n;
    area=front(m);
    perimeter=back(n);
    cout<<area<<endl;
    cout<<perimeter<<endl;
}