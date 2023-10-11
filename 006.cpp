#include<iostream>

using namespace std;

int SumSquare(int n);
int SquareSum(int n);

int main(){

    cout << SumSquare(100) - SquareSum(100) << endl;
}

int SumSquare(int n){

    int sum = 0;
    for(int i = 1; i <= n;++i){

        sum = sum +i;
    }
    return sum*sum;
}

int SquareSum(int n){

    int sum = 0;

    for(int i = 1; i <=n ; ++i){

        sum = sum + i*i;
    }

    return sum;
}