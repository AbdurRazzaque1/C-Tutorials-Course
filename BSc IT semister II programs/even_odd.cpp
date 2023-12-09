#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0    )    
    {
        cout << "The number you entered is even\n\n";
    }
    else
    {
        cout << "The number you entered is odd\n\n";
    }
    return 0;
}