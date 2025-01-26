#include <iostream>
using namespace std;
int Read_Number()
{
	int Number; 
	cout << "please , enter a number ?";
	cin >> Number;
	return Number;
}
void add_array_element( int Number , int arr[100] , int &length)
{
	length++;
	arr[length - 1] = Number;
}
void user_put_array_elements(int arr[100],  int &length)
{
	bool add_more = true;
	do
	{
		add_array_element(Read_Number(), arr, length);

		cout << "Do you want to add more numbers ? [0] No , [1] yes ?";
		        cin >> add_more;
		        
		        cout << endl;
		       
		
    } while (add_more);
}

void print_array_with_random_numbers(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;

}
int main()
{
    int arr[100];
	int length = 0;

	user_put_array_elements(arr, length);

    cout << "Array length :" << length  << endl;

    cout << "Array Elements : ";
    print_array_with_random_numbers(arr, length);
}














// My solution
//#include <iostream>
//using namespace std;
//
//
//void array_simi_dynamic(int arr[100] , int &length)
//{
//    bool add = true;
//    length = 0;
//    do
//    {
//            cout << "please , enter a number ?";
//            cin >> arr[length];
//
//            length++;
//
//        cout << "Do you want to add more numbers ? [0] No , [1] yes ?";
//        cin >> add;
//        
//        cout << endl;
//       
//
//    } while (add == 1);
//
//     
//}
//void print_array_with_random_numbers(int arr[100], int length)
//{
//    for (int i = 0; i < length; i++)
//    {
//        cout << arr[i] << " ";
//
//    }
//    cout << endl;
//
//}
//
//
//int main()
//{
//    int arr[100];
//    int length;
//    array_simi_dynamic(arr, length);
//
//    cout << "Array length :" << length  << endl;
//
//    cout << "Array Elements : ";
//    print_array_with_random_numbers(arr, length);
//}
//
