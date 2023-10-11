#include <iostream>

using namespace std;

int main(){

    int f1 = 1;
    int f2 = 2;
    int sum = 0; 

    while(f1 < 4000000){

        if(f1%2 == 0)
             sum += f1;
        
        f2 = f1 +f2;
        f1 = f2 -f1;
    }

    cout << sum << endl;
}