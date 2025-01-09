

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
        Reversed = Reversed * 10 + Remainder;
        Number /= 10;
    }
    return Reversed;
}
void Count_digit(int Reversed)
{
    int Remainder = 0;
    int Result;
    while (Reversed > 0)
    {
        Remainder = Reversed % 10;
        Reversed /= 10;
        cout<< Remainder << endl ;
    }
   


}



int main()
{
    Count_digit(Reversed_number(Read_positive_number(" please enter a number :")));
}

