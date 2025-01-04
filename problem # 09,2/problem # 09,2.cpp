

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
int count_digit_frequency(  short DigitFrequency , int Number)
{
    int Remainder = 0;
    int FreqCount = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        if (DigitFrequency == Remainder)
        {
            FreqCount++;
        }
      
    }
    return FreqCount;
}
void Print_All_Digits_Frequency (int Number)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = 0;
        DigitFrequency = count_digit_frequency(i, Number);
        if (DigitFrequency > 0)
        {
            cout << "\n Digit " << i << " frequency is "
                << DigitFrequency << " time (s) " << endl;
        }
    }
    
               
    
}


int main()
{
    int Number = Read_positive_Number("please enter the main number  : ");
    Print_All_Digits_Frequency(Number);
    
}

