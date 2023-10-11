#include <iostream>

using namespace std;

int Ekok(int a, int b){
    int n1 = a;
    int n2 = b;
    while(a != b){

        if( a > b){

            b = n2 +b; 
        }

        else if(b > a){

            a = n1 + a;
        }
    }

    return a;
}

int main(){

    int ekok = 20;

    for(int i = 19 ; i != 1 ; i--){

        ekok = Ekok(ekok,i);
    }
    cout << ekok << endl;
}