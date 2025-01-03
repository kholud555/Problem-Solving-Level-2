

#include <iostream>
using namespace std;
int Read_positive_Number(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
int sum_Of_digits(int Number)
{
    int Remainder = 0;
    int sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /=  10;
        sum += Remainder;  
    }
    return sum;
}

int main()
{
   cout << "sum of digits are : "
       << sum_Of_digits(Read_positive_Number("please enter a number :"))
       << "\n";
}

