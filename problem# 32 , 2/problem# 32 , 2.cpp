
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

void fill_ordered_array(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = Random_number(1, 100);

	}
	cout << endl;
}
void copy_array_with_reverse_order(int arrsource[100], int arrdestination[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arrdestination[i] = arrsource[arrlength - 1 - i];
	}
		

}

void print_array(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";

	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrlength = Read_positive_Number(" Enter number of elements : \n");

	fill_ordered_array(arr, arrlength);

	cout << " Array 1 elements:" << endl;
	print_array(arr, arrlength);
	cout << endl;

	int arr2[100];
	copy_array_with_reverse_order( arr,arr2, arrlength);

	cout << " Array elements after shuffle : " << endl;
	print_array(arr2, arrlength);
	cout << endl;

}
