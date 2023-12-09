#include <iostream>
using namespace std;
int main ()
{
    int first_num, second_num, operation;
    cout <<"Enter first number:  ";
    cin >> first_num;
    cout <<"Enter second number:  ";
    cin >> second_num;
    operation = first_num + second_num;
    cout << "The sum of the number is " << operation << "\n\n";

    operation = first_num - second_num;
    cout << "The difference of the numbers is " << operation << "\n\n";

    return 0;
}