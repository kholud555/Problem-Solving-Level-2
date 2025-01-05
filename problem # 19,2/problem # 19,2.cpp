

#include <iostream>
#include<cstdlib>
using namespace std;
int Random_number(int from, int to)
{
    int Ran_Num = rand() % (to - from + 1) + from;
    return Ran_Num;
}
int main()
{
    srand((unsigned)time(NULL));
    cout << Random_number(1, 10) << endl;
    cout << Random_number(1, 10) << endl;
    cout << Random_number(1, 10) << endl;
}
