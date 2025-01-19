
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
void swap(int&A, int&B)
{
	int temp;
	temp = A;
	 A = B;
	 B = temp;
}
void fill_ordered_array(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		 arr[i] = i + 1;
		 
	}
	cout << endl;
}
void shuffle_array (int arr[100], int arrlength)
{
	for(int i = 0; i < arrlength; i++ )
	{
		swap(arr[Random_number(1, arrlength) - 1], arr[Random_number(1, arrlength) - 1]);
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

	cout << " Array elements before shuffle :" << endl;
	print_array(arr, arrlength);
	cout << endl;

	shuffle_array(arr, arrlength);

	cout << " Array elements after shuffle : " << endl;
	print_array(arr, arrlength);
	cout << endl;

}
