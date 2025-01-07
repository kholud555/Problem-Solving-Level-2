

#include <iostream>
using namespace std;
enum enPrimeNotPrime {prime = 1 , Notprime = 2};
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
enPrimeNotPrime check_prime(int Number)
{
    int M = round(Number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
            if (Number % counter == 0 )
                
                return enPrimeNotPrime::Notprime ;        
            
    }
    return enPrimeNotPrime::prime;
}
void Print_Number_type(int Number )
{
    cout << "\n";
    cout << "Prime numbers from 1 to " << Number << "are :" << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (check_prime(i) == enPrimeNotPrime::prime)
            cout << i << endl;
       }
}

int main()
{
    
    Print_Number_type(Read_positive_Number("Please enter a number :"));
}
