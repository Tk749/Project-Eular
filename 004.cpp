#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n1;
    int n2;
    int nmax = 1;
    int n;

    for(n1 = 400 ; n1 <= 999 ; n1++){
        for(n2 = 400 ; n2 <= 999 ; n2++){

            n = n1 * n2;
            if( (n/100000) == (n % 10) && ( (n/10000) % 10) == ( (n/10) % 10)  && ((n/1000) % 10) == ((n/100) % 10) ) nmax > n ?  : nmax = n;
        }
    }

    cout << nmax << endl;
}



/*

#include <iostream>
using namespace std;
bool isPalindromic(string a){
    int left = 0, right = a.size()-1;
    while(left <= right){
        if(a[left] != a[right]) return false;
        left++;
        right--;
    }
    return true;
}

bool isDividable(string a){
    for(int i = 100; i < 1000; i++){
        if(stoi(a) % i == 0 && stoi(a)/i >= 100 && stoi(a)/i <= 999){
            cout << i << " " << stoi(a) / i << " ";
            return true;
        }
    }
    return false;
}


int main() {
    for(int i = 998001; i >= 10000; i--){
        if(isPalindromic(to_string(i)) && isDividable(to_string(i))){
            cout << i << endl;
            break;
        }
    }
}


*/