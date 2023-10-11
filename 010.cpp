#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    bool flag = true;
    int count = 0;

    for (int i = 2; i < 2000000; ++i)
    {
        flag = true;
        cout << i << endl;
        for (int j = 2; j < i / 2 + 1; ++j)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            sum += i;
            count++;
        }
    }
    cout << fixed;
    cout << count << endl;
    cout << sum << endl;
}