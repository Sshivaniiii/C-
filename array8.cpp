#include <iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,40,50};
    int *p;
    p=&a[2];
    cout<<(*p);
}