

#include <iostream>
using namespace std;
int Read_postive_number(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
void Read_array(int arr[100], int &arrlength)
{
    cout << "\n Enter number of elements :" << endl;
    cin >> arrlength;

    cout << "Enter array elements : " << endl;

    for (int i = 0; i < arrlength; i++)
    {
        cout << "element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}
void print_array(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int time_to_repeat(int arr[100], int arrlength,int Number_to_check)
{
    int counter = 0; 

    for (int i = 0; i <= arrlength - 1; i++)
    {
        if (Number_to_check == arr[i])
        {
            counter++;
        }
    }
    return counter;
}




int main()
{
    int arr[100], arrlength, Number_to_check;

    Read_array(arr, arrlength);

    Number_to_check = Read_postive_number("Enter the number you want to check : ");

    cout << "original array : ";
    print_array(arr, arrlength);
    cout << endl;

    cout << "Number " << Number_to_check;
    cout << " is repeated " <<
        time_to_repeat(arr, arrlength, Number_to_check) << " time(s) " << endl;
}

