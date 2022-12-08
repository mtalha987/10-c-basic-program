#include <iostream>
using namespace std;
int main()
{
    /* Write a program which will input numbers from user until user enters negative number and display
    how many numbers were even and how many were odd?*/
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 1;
    int odd = 0;
    int even = 0;
    while (num >= 0)
    {
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        cout << "Enter another number Thanks ";
        cin >> num;
        count++;
    }

    cout << "Finally you enter negative number which is  " << num << " and total number you enter is " << count<<endl <<"Total even you enter is "<<even << endl<<"total odd you enter is "<<odd << endl<<endl;
}