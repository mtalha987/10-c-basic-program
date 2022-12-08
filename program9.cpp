#include <iostream>
using namespace std;
int main(){
  // Write a program which will input numbers from user until user enters zero and then display the count of total numbers entered.
     int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 1;
    while (num != 0)
    {
        cout << "Enter another number Thanks ";
        cin >> num;
        count+=1;
    }

    cout<<"Finally you enter 0  total time you entered is  "<<count;
}