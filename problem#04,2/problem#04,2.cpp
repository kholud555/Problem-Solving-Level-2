

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
bool check_is_perfect(int Number)
{
    int sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            sum += i;
    }
    return Number == sum;
}
void Print_result(int Number)
{
    cout << "\n";
    cout << "Perfect numbers from 1 to " << Number << " are :" << endl;
    
    for (int counter = 1; counter < Number; counter++)
    {
        if (check_is_perfect(counter))
            cout << counter << endl;


    }
}

int main()
{
    Print_result(Read_positive_Number("Please enter a positive number :"));
}

  