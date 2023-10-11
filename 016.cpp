#include <iostream>

using namespace std;
void sums(int number[500]);

int main()
{
    int sum = 0;

    int number[500];

    for (int i = 0; i < 500; ++i)
    {

        number[i] = 0;
    }
    number[0] = 1;
    for (int i = 0; i < 1000; ++i)
    {

        sums(number);
    }
    for (int i = 0; i < 500; ++i)
    {
        sum += number[500 - i - 1];
    }

    cout << sum << endl;
}

void sums(int number[500])
{

    for (int i = 0; i < 500; ++i)
    {
        number[i] = number[i] + number[i];
    }
    for (int i = 0; i < 500; ++i)
    {

        if (number[i] >= 10)
        {

            number[i + 1] += number[i] / 10;
            number[i] = number[i] % 10;
        }
    }
}