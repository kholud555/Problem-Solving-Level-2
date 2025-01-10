#include <iostream>
#include <string>
using namespace std;
string Read_password()
{
    string Password;
    cout << "please enter a 3 letter password (All capital)" <<endl;
    cin >> Password;
    return Password;
}
bool Guess_3_letters_password(string original_Password)
{
    string word = "";
    int counter= 0;
    cout << "\n";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
               
                cout << "Trail [ " << counter << " ]:";
                cout<< word << endl;

                if (word == original_Password)
                {
                    cout << "\n Password is " << word << "\n";
                    cout << "found  after ";
                    cout<< counter << " trail(s)" << endl;
                    return true;
                }
                word = "";
            }
     
        }

    }
    return false;
}



int main()
{
     Guess_3_letters_password(Read_password());
    return 0;
}
