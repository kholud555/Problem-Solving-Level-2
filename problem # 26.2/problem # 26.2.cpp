

#include <iostream>
#include<cstdlib>
using namespace std;
int Random_number(int from, int to)
{
	int Rand_num = rand() % (to - from + 1) + from;
	return Rand_num;
}
void fill_array_with_random_numbers(int arr[100], int &arrlength)
{
	cout << "\n Enter number of elements :" << endl;
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
		arr[i] = Random_number(1, 100);
}
void print_array_with_random_numbers(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}
int sum_of_arrayElements_with_random_numbers(int arr[100], int arrlength)
{
	int sum = 0;
	for (int i = 0; i < arrlength; i++)
	{
		sum += arr[i];
	}
	return sum;
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;

	fill_array_with_random_numbers(arr, arrlength);

	cout << " Array elements are : ";
	print_array_with_random_numbers(arr, arrlength);
	cout << endl;

	cout<<"  sum of all numbers are : "<< sum_of_arrayElements_with_random_numbers(arr, arrlength);
}
