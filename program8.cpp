#include <iostream>
using namespace std;
int main(){
    // Write a program which will input numbers from user until user enters negative number.
     int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num >= 0)
    {
        cout << "Enter another number Thanks ";
        cin >> num;
    }

    cout<<"Finally you enter negative number which is  "<<num;

}