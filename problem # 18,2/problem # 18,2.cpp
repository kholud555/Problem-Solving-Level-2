

#include <iostream>
# include <cstdlib>
using namespace std;
int Random_number(int from, int To)
{
	//function to generate a random number.
	int Ran_Num = rand() % (To - from + 1) + from;
	return Ran_Num;
}

int main()
{
	// seeds the random number generator in c++ , called only once.
	srand((unsigned)time(NULL));
	/*cout << rand() << endl;
	cout << rand()%10 << endl;*/
	cout << Random_number(1, 10) << endl;
	cout << Random_number(1, 10) << endl;
	cout << Random_number(1, 10) << endl;

}

