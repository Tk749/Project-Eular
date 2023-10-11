#include<iostream>
#include <iomanip>

using namespace std;


int main(){
    //for 10x10 grid
    int size = 20;
    long double routes[size][size];
    cout << fixed;
    for(int i = 0; i<size;++i){
        for(int j = 0;j<size;++j){

            routes[i][j] = 0;
        }
    }

    for(int i=0;i<size;++i){

        routes[i][0] = 1;
    }
    for(int i=0;i<size;++i){

        routes[0][i] = 1;
    }
    for(int i=1;i<size;++i){
        for(int j = 1;j<size;++j){

            routes[j][i] = routes[j-1][i]+routes[j][i-1];
        }
    }

    cout << fixed << routes[19][19] <<endl;
}
