/*#include <iostream>
using namespace std;
int main(){
    int x=100;
    char *p;
    p=(char*)&x;
    cout<<(*p);
}
*/
#include <iostream> 
using namespace std;
int main(){
    int x=100;
    int *p;
    p=(int *)&x;
    cout<<*p;
}