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
void print_array_with_random_numbers(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";


	}
	cout << endl;

}
short find_number_position_in_array(int search_num, int arr[100], int arrlength)
{
	/*Thid function will search for a number in array and retun
	index , or return -1 if it does not exsist*/
	for (int i = 0; i < arrlength; i++)
	{
		if (arr[i] == search_num)
		{
			return i;// and return the index0
		}
	}
	// if you reached here, this means the number id not found 
	return -1;
}
int Read_number()
{
	int search_num;
	cout << "please , enter a number to search for ?\n";
	cin >> search_num;
	return search_num;
}
bool Is_number_in_array( int search_num , int arr[100] , int arrlength)
{
	return(find_number_position_in_array(search_num, arr, arrlength) != -1);
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;

	fill_array_with_random_numbers(arr, arrlength);

	cout << " Array 1 elements : " << endl;
	print_array_with_random_numbers(arr, arrlength);
	cout << endl;

	int search_num = Read_number();
	cout << "Number you are looking for is :" << search_num << endl;

	//int Number_position = find_number_position_in_array(search_num, arr, arrlength);
	if (!Is_number_in_array(search_num , arr , arrlength))
	{
		cout << "The number is not found :-(" << endl;
	}
	else
	{
		cout << "The number is found :-)" << endl;
	}


}
