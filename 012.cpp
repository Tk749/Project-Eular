#include <iostream>

using namespace std;

int divisors_number(long long unsigned int number);

int main()
{

    long long unsigned int number = 12;

    while (1)
    {   
        number = number + 1;

        if (500 < divisors_number(number))
        {
            break;
        }
    }
}

int divisors_number(long long unsigned int number)
{
    cout << number*(number+1)/2 << " ";

    int count1=0,count2=0;

    if(number%2 == 0){

        for(int i = 1; i <=number/2;++i){

            if((number/2) % i == 0){
                ++count1;
            }
        }

        for(int i = 1 ;i<=number+1;++i){
            if((number+1) % i == 0){

                ++count2;
            }
        }
    }
    if(number%2 == 1){
        for(int i = 1; i <=(number+1)/2;++i){

            if(((number+1)/2) % i== 0){
                ++count1;
            }
        }

        for(int i = 1;i<=number;++i){

            if(number % i == 0){

                ++count2;
            }
        }
    }


    cout << " " << count1*count2 << endl;
    return count1*count2;
}