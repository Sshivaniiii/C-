#include <iostream>
using namespace std;
int main(){
    int num,rev=0,n,temp;
    cout<<"enter value of num";
    cin>>num;
    temp=num;
    while(num!=0){
        n=num%10;
        rev=n*n*n+rev;
        num=num/10;
        cout<<rev<<endl;
        
    } 
    
    if(temp==rev){
        cout<<"it is a armstrong number"<<endl;
    } 
    else{
        cout<<"it is not a armstrong number"<<endl;
        
    }
    
    

}