

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
    for (int i = 65+Number-1; i >= 65; i--)
    {

        for (int j = 1; j <= Number - (65+Number-1-i); j++)
        {
            cout << char( i);

        }

        cout << endl;
    }
}
// My solution
//void Print_inverted_pattren(int Number)
//{
//    for (int i = Number ; i >= 1; i--)
//    {
//        
//        for (int j = i; j >= 1; j--)
//        {
//            cout << char( 64 + i);
//
//        }
//
//        cout << endl;
//    }
//}

int main()
{
    Print_inverted_pattren(Read_positive_number("please enter a number :"));
}

