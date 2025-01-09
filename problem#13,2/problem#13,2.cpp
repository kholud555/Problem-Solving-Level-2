// problem # 12,2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

void Print_inverted_pattren(int Number)
{
    for (int i = 1; i <= Number; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i;

        }

        cout << endl;
    }
}

int main()
{
    Print_inverted_pattren(Read_positive_number("please enter a number :"));
}

