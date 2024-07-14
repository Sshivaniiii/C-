#include <iostream>
using namespace std;
float discovered(float r)
{
    return 3.14 * r * r;
}
float old(float s){
    return 2*3.14*s;
}
int main()
{
    float a, b;
    float area,circumference;
    cout << "enter value of a" << endl;
    cin >> a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    area=discovered(a);
    circumference=old(b);
    cout << area<<endl;
    cout<<circumference<<endl;
}