#include<iostream>

using namespace std;

int main(){

    long int n = 600851475143;
    int primeMax = 2;
    
    for(int i = 2; n != 1 ; ++i){

        if(n % i == 0){
            
            n = n / i;
            primeMax = i;
            --i;
        }
    }

    cout << primeMax << endl;
}