#include <iostream>
#include <fstream> // for file input/output

using namespace std;

void read_file(int arr[100][50]);
int sum(int arr[100][50], int number[100], int j, int Cin);

int main()
{

    int arr[100][50];
    int number[50];

    read_file(arr);

    int Coutt = 0;
    for (int i = 0; i < 50; ++i)
    {

        Coutt = sum(arr, number, 49 - i, Coutt);
    }

    cout << Coutt;
    for (int i = 0; i < 50; ++i)
    {

        cout << number[i];
    }
    cout << endl;
}

int sum(int arr[100][50], int number[50], int j, int Cin)
{
    unsigned int sum = 0;

    for (int i = 0; i < 100; ++i)
    {
        sum = sum + arr[i][j];
    }
    sum = sum + Cin;
    number[j] = sum % 10;

    return sum / 10;
}

void read_file(int arr[100][50])
{

    ifstream inputFile;
    inputFile.open("013.txt");

    if (!inputFile)
    {
        // Handle error: file could not be opened
        std::cerr << "Error: could not open file" << std::endl;
        return;
    }
    char temp;
    int i = 0;
    while (1)
    {

        for (int j = 0; j < 50; ++j)
        {
            inputFile >> temp;
            arr[i][j] = (temp - '0');
        }

        ++i;
        if (i == 100)
            break;
    }

    inputFile.close();

    return;
}