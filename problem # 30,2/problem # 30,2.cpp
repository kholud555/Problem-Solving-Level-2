

#include <iostream>
using namespace std;
int Random_number(int from, int to)
{
    int Rand_num = rand() % (to - from + 1) + from;
    return Rand_num;
}
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

void fill_array_with_random_numbers(int arr[100], int arrlength)
{


	for (int i = 0; i < arrlength; i++)
		arr[i] = Random_number(1, 100);

}


void sum_of_arrays(int arr[100], int arr2[100], int arrsum[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arrsum[i] = arr[i] + arr2[i];
	}
}
void print_array(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;

}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrlength = Read_positive_Number(" Enter number of elements : \n");
	fill_array_with_random_numbers(arr, arrlength);

	int arr2[100];
	fill_array_with_random_numbers(arr2, arrlength);

	int arrsum[100];
	sum_of_arrays(arr, arr2, arrsum, arrlength);

    cout << "Array elements : " << endl;
	print_array(arr, arrlength);
	cout << endl;

	cout << "Array 2 elements after copy : " << endl;
	print_array(arr2, arrlength);
	cout << endl;

	cout << "sum of array 1 and array 2 elements : " << endl;
	print_array(arrsum, arrlength);
	cout << endl;

}

