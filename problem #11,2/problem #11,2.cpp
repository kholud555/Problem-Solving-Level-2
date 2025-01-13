

#include <iostream>
using namespace std;
int Read_positive_number(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int Reversed_number(int Number)
{
    int Remainder = 0;
    int Reversed = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Reversed = Reversed * 10 + Remainder;

    }
    return Reversed;
}
bool Is_Palindrome_Number(int Number)
{
    return Number == Reversed_number(Number);
}

int main()
{
    if (Is_Palindrome_Number(Read_positive_number(" please enter a number :")))
    {
        cout << "Yes, it is a palindrome number" << endl;
    }
    else 
    {
        cout << "No, it is not a palindrome number" << endl;
    }




    return 0;

}

