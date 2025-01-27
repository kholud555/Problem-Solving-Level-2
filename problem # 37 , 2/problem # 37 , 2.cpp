
#include <iostream>
using namespace std;
int Random_number(int from, int to)
{
	int Rand_num = rand() % (to - from + 1) + from;
	return Rand_num;
}
void fill_array_with_random_numbers(int arr1[100], int& arrlength)
{
	cout << "\n Enter number of elements :" << endl;
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
		arr1[i] = Random_number(1, 100);

}
void add_array_element(int Number, int arr[100], int& arrlength)
{
	arrlength++;
	arr[arrlength - 1] = Number;
}

void copy_array_using_add_array_elements(int arrsource[100] , int arrdestination[100] , int arrlength , int & arr2length)
{
	for (int i = 0; i < arrlength; i++)
		add_array_element(arrsource[i], arrdestination, arr2length);
}

void print_array_with_random_numbers(int arr[100], int arrlength)
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
	int arr[100], arr2[100], arrlength = 0 ,arr2length = 0;

	fill_array_with_random_numbers(arr, arrlength);

	copy_array_using_add_array_elements(arr, arr2, arrlength , arr2length);

	cout << "Array elements : " << endl;
	print_array_with_random_numbers(arr, arrlength);
	cout << endl;

	cout << "Array 2 elements after copy : " << endl;
	print_array_with_random_numbers(arr2, arr2length);
	cout << endl;
}


 