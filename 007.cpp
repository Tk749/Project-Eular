#include<iostream>

using namespace std;

int size = 10001;
int main(){
    
    bool isPrime = true;
    int Prime[size];

    Prime [0] = 2;

    for(int i = 1 ; i < size ; ++i){
        for(int j = Prime[i-1]+1 ; ; ++j){

            isPrime = true;

            for( int k = i-1; k >= 0 ; --k){

                if( j % Prime[k] == 0) isPrime = false ;   
            }

            if(isPrime){ Prime[i] = j; break; }
        }

        //cout << i   << " " << Prime[i - 1] << endl ;
    }

    cout << size  << " --> " << Prime[size -1 ] << endl;
}