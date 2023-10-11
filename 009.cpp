#include <iostream>

using namespace std;

int main()
{

    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    int sqrt2 = 0;
    int flag = 0;

    for (a = 1; a < 1000; ++a)
    {
        for (b = a; b < 1000; ++b)
        {
            for (c = b; c < 1000; ++c)
            {
                if ((a + b + c) == 1000)
                {
                    if ((a * a + b * b) == (c * c))
                    {
                        flag = 1;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    cout << a * b * c << endl;
}