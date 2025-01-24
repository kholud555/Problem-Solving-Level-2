
#include <iostream>
using namespace std;
enum enkey_type { small_letters = 1, capital_letters = 2, special_character = 3, Digits = 4 };
int Random_number(int from, int to)
{
	int Rand_num = rand() % (to - from + 1) + from;
	return Rand_num;
}
char Get_random_character(enkey_type key_type)
{
    switch (key_type)
    {
    case enkey_type::small_letters:
    {
        return char(Random_number(97, 122));
        break;
    }
    case enkey_type::capital_letters:
    {
        return char(Random_number(65, 90));
        break;

    }
    case enkey_type::special_character:
    {
        return char(Random_number(33, 47));
        break;
    }
    case enkey_type::Digits:
    {
        return char(Random_number(48, 57));
        break;
    }
    }
}
string Generate_word(enkey_type key, short length)
{
	string word;
	for (int i = 1; i <= length; i++)
	{
		word = word + Get_random_character(key);
	}
	return word;
}
string Generate_key()
{
	string key = "";
	key = Generate_word(enkey_type::capital_letters, 4) + "-";
	key = key + Generate_word(enkey_type::capital_letters, 4) + "-";
	key = key + Generate_word(enkey_type::capital_letters, 4) + "-";
	key = key + Generate_word(enkey_type::capital_letters, 4);
	return key;
}
void fill_array_with_random_numbers(string arr[100], int& arrlength)
{
	cout << "\n Enter number of elements :" << endl;
	cin >> arrlength;

    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = Generate_key();
    }

}
void print_array_with_random_numbers(string arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << " array [" << i << "] : " << arr[i] << endl;

    }
   

}

int main()
{
	srand((unsigned)time(NULL));
    string arr[100];
    int arrlength;

    fill_array_with_random_numbers(arr, arrlength);

    cout << "array elements :" << endl;
    print_array_with_random_numbers(arr, arrlength);
}

