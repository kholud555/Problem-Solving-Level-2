

#include <iostream>
using namespace std;

enum enprimeNotprime {prime = 1 , Notprime = 2};

int Random_number(int from, int to)
{
    int Rand_num = rand() % (to - from + 1) + from;
    return Rand_num;
}
void fill_array_with_random_numbers(int arr[100], int& arrlength)
{
	cout << "\n Enter number of elements :" << endl;
	cin >> arrlength;

	for (int i = 0; i < arrlength; i++)
		arr[i] = Random_number(1, 100);

}
enprimeNotprime  check_prime(int Number)
{
		int M = round( Number / 2);
		for (int counter = 2; counter <= M; counter++)
		{
			if (Number % counter == 0)
			{
				return enprimeNotprime::Notprime;
			}
		}
	
	return enprimeNotprime::prime;
}
void print_array_with_random_numbers(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;

}
void copy_only_prime_numbers(int arrsource[100], int arrdestination[100], int arrlength, int& arr2length)
{
	int counter = 0;
	for ( int i = 0; i< arrlength; i++)
	{
		if (check_prime(arrsource[i]) == enprimeNotprime::prime)
		{
			 arrdestination[counter]= arrsource[i];
				counter++;
		}
	}

	arr2length = -- counter;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
	fill_array_with_random_numbers(arr, arrlength);

	int arr2[100], arr2length = 0;
	copy_only_prime_numbers(arr, arr2, arrlength ,arr2length);

	cout << "Array elements : " << endl;
	print_array_with_random_numbers(arr, arrlength);
	cout << endl;

	cout << "Array 2 elements after copy : " << endl;
	print_array_with_random_numbers(arr2, arr2length);
	cout << endl;
}

