
 //Right solution#include <iostream>
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
	// if you reached here, this mean the number id not found 
	return -1;
}
int Read_number()
{
	int search_num;
	cout << "please , enter a number to search for ?\n";
	cin >> search_num;
	return search_num;
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

	int Number_position = find_number_position_in_array(search_num, arr, arrlength);
	 if (Number_position == -1)
	 {
		 cout << "The number is not found :-(" << endl;
	 }
	 else
	 {
		 cout << "The number found at position : " << Number_position << endl;
		 cout << "the number found in order : " << Number_position + 1 << endl;
	 }


}


//// My solution
//#include <iostream>
//using namespace std;
//int Random_number(int from, int to)
//{
//	int Rand_num = rand() % (to - from + 1) + from;
//	return Rand_num;
//}
//void fill_array_with_random_numbers(int arr1[100], int& arrlength)
//{
//	cout << "\n Enter number of elements :" << endl;
//	cin >> arrlength;
//
//	for (int i = 0; i < arrlength; i++)
//		arr1[i] = Random_number(1, 100);
//
//}
//void print_array_with_random_numbers(int arr[100], int arrlength)
//{
//	for (int i = 0; i < arrlength; i++)
//	{
//		cout << arr[i] << " ";
//
//	}
//	cout << endl;
//
//}
//int ask_for_search_number()
//{
//	int search_num;
//	cout << "please , enter a number to search for?\n";
//	cin >> search_num;
//	return search_num;
//}
//bool searching_Number(int arr[100], int search_num, int arrlength)
//{
//	int counter = 0;
//	cout << "Number you are looking for is :" << search_num << endl;
//	for (int i = 0; i < arrlength; i++)
//	{
//		counter++;
//		if (arr[i] == search_num)
//		{
//			cout << "The number found at position : " << i << endl;
//			cout << "the number found in order : " << counter << endl;
//			return true;
//		}
//		
//	}
//	
//	return false;
//}
//
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr[100], arrlength;
//
//	fill_array_with_random_numbers(arr, arrlength);
//
//	cout << " Array 1 elements : " << endl;
//	print_array_with_random_numbers(arr, arrlength);
//	cout << endl;
//	int search_num = ask_for_search_number();
//
//	 if (searching_Number(arr, search_num, arrlength) == 0)
//	 {
//		 cout << "The number is not found :-(" << endl;
//	 }
//
//
//}
//


