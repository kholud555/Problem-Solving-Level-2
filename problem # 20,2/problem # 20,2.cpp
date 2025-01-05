

#include <iostream>
#include <cstdlib>
using namespace std;

enum enkey_type { small_letters = 1, capital_letters = 2, special_character = 3,Digits =4 };

int Random_number(int from, int to)
{
    int Ran_Num = rand() % (to - from + 1) + from;
    return Ran_Num;
}

char Get_Randam_character(enkey_type char_type)
{
    switch (char_type)
    {

    case enkey_type::small_letters:
    {
        return char(Random_number(97, 122));
        break;

    }
    case enkey_type::capital_letters:
    {
        return char(Random_number(65, 99));
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

int main()
{
    srand((unsigned)time(NULL));
    cout << Get_Randam_character(enkey_type::small_letters) << endl;
    cout << Get_Randam_character(enkey_type::capital_letters) << endl;
    cout << Get_Randam_character(enkey_type::special_character) << endl;
    cout << Get_Randam_character(enkey_type::Digits) << endl;
}

