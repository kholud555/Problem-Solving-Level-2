
#include <iostream>
using namespace std;
int Read_positive_Number(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int Reversed_Number(int Number)
{
    int Remainder = 0;

    int Reversed = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Reversed = Reversed * 10 + Remainder;
       
         
    }
    return  Reversed;
}

int main()
{
    cout << "Reversed is :\n"
        << Reversed_Number(Read_positive_Number("please enter a number :"))
        << "\n";
}
