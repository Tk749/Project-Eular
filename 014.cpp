#include <iostream>

using namespace std;

int main()
{

    int chain_length = 0;
    int temp_length = 0;
    unsigned int temp = 0;
    unsigned long long int number;

    for (int i = 2; i <= 1000000; ++i)
    {
        number = i;
        temp_length = 1;
        while (number != 1)
        {
            if (number % 2 == 0)
            {
                number = number / 2;
                ++temp_length;
            }
            else
            {
                number = 3 * number + 1;
                ++temp_length;
            }
        }

        chain_length = chain_length > temp_length ? chain_length : temp_length;
        if (chain_length == temp_length)
            temp = i;
    }
    cout << temp << "->" << chain_length << endl;

}