

#include <iostream>
#include<cstdlib>
using namespace std;


int Random_number(int from, int to)
{
    int Ran_Num = rand() % (to - from + 1) + from;
    return Ran_Num;
}
void fill_array(int arr[100], int& arrlength)
{
    cout << "\n Enter number of elements :" << endl;
    cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
        arr[i] = Random_number(1, 100);
}
void print_array(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
int Max_Number(int arr[100], int arrlength)
{
    int Max = 0;
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
         }

    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;

    fill_array(arr, arrlength);

    cout << "Array Elements :";
    print_array(arr, arrlength);
    cout << endl;
    cout << "Max number is " << Max_Number(arr, arrlength);




}
