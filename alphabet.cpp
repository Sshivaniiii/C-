#include <iostream>
using namespace std;
int main()
{
    int i, j, k, num;
    char A = 65;
    cout << "enter value of num";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout << A;
            A++;
        }
        cout << endl;
    }
}



    
