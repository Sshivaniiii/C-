#include <iostream>
using namespace std;
int main(){
    int a,row,col;
    a=6;
    for(row=0 ; row<a ; row++){
        for(col=0; col<a+1; col++){
           if ((row == 0 && col % 3 !=0)||(row == 1 && col%3==0) || (row - col ==2) ||
           (row + col==8))
        {
            cout<<".";
        } 
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }
}