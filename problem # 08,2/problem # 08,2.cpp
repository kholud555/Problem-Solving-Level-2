

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
int count_digit_frequency(int Num1, short Digit_to_check)
{
    int Remainder = 0;
    int FreqCount = 0;
    while (Num1 > 0)
    {
        Remainder = Num1 % 10;
        Num1 /= 10;
        if (Digit_to_check == Remainder)
        {
            FreqCount++;
        }
      
    }
    return FreqCount;
}


int main()
{
    int Num1 = Read_positive_Number("please enter the main number  : ");
    short Digit_to_check = Read_positive_Number("please enter one digit to check : ");

    cout<< "\n Digit "<< Digit_to_check
      <<" frequency is " <<count_digit_frequency(Num1, Digit_to_check) 
             <<" time (s) \n";
}

