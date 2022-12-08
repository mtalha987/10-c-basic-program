#include <iostream>
using namespace std;
int main()
{
    // Write a program which will input numbers form user until user enters zero
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        cout << "Enter another number Thanks ";
        cin >> num;
    }

    cout<<"Finally you enter 0  ";
}