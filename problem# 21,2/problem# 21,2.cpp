

#include <iostream>
#include<cstdlib>
using namespace std;

enum enkey_type { small_letters = 1, capital_letters = 2, special_character = 3, Digits = 4 };

int Read_number( string Message)
{
    int keys_number;
    do
    {
        cout << Message << endl;
           
        cin >> keys_number;
    } while (keys_number <= 0);
    return keys_number;
}

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
     string word = "";
    for (int i = 1; i <= length; i++)
    {
        word = word + Get_random_character(key);
    }
    return word;
}

string Generate_key()
{
    string key = "";
    key =  Generate_word(enkey_type::capital_letters, 4) + "-";
    key = key + Generate_word(enkey_type::capital_letters, 4) + "-";
    key = key + Generate_word(enkey_type::capital_letters, 4) + "-";
    key = key + Generate_word(enkey_type::capital_letters, 4) ;
    return key;
}

void Generate_keys(int Keys_Number)
{
    for (int i = 1; i <= Keys_Number; i++)
    {
        cout << "key [" << i << "] : " <<
            Generate_key() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    Generate_keys(Read_number("please, enter how many keys to generate ?\n"));
   
}

