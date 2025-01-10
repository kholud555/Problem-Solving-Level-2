
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
    for (int i = 65; i <= (65 + Number - 1); i++)
    {

        for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i);

        }

        cout << endl;
    }
}


int main()
{
    Print_inverted_pattren(Read_positive_number("please enter a number :"));
}

