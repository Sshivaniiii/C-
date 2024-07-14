#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if((year%100==00 && year%400==0) || year%4==0){
        cout<<"it is leap year";
    } else{
        cout<<"it is not a leap year";
    }
}