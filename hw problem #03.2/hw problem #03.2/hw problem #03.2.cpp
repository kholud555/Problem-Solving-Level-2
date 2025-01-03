

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
void print_Result(int Number)
{
    if (check_is_perfect(Number))
        cout << Number << " is a perfect number";
    else
        cout << Number << " is not perfect number";
}

int main()
{
    print_Result(Read_positive_Number("please enter a number:"));
    
}

