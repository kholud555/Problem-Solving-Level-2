

#include <iostream>
using namespace std;
int Random_number(int from, int to)
{
	int Rand_num = rand() % (to - from + 1) + from;
	return Rand_num;
}
void fill_array_with_random_numbers(int arr1[100] ,int& arrlength)
{
	cout << "\n Enter number of elements :" << endl;
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
		arr1[i] = Random_number(1, 100);
	  
}
void copy_array_with_random_numbers(int arr2[100], int arr[100],int arrlength)
{
	

	for (int i = 0; i < arrlength; i++)
		arr2[i] = arr[i];

}
void print_array_with_random_numbers(int arr[100],  int arrlength)
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
	int arr[100], arr2[100], arrlength;

	fill_array_with_random_numbers(arr, arrlength);

	copy_array_with_random_numbers(arr2,  arr  ,arrlength);

	cout << "Array elements : " << endl;
	print_array_with_random_numbers(arr, arrlength);
	cout << endl;

	cout << "Array 2 elements after copy : " << endl;
	print_array_with_random_numbers(arr2, arrlength);
	cout << endl;
}

