#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPalindrom(long number) {
    bool valid = true;
    int digits = 0;
    long n = number;
    while (n >= 10) {
        n = n / 10;
        digits++;
    }
    digits++;
    
    int arr[digits];
    n = number;
    int i = digits-1;
    while (n >= 10) {
        arr[i] = n % 10;
        n = n / 10;
        i--;
    }
    arr[0] = n;
    
    int a = 0;
    while (a <= digits/2 - 1) {
        if(arr[a] != arr[digits-1-a]) {
            valid = false;
        }
        a++;
    }
    return valid;
}

int main(){
    long n;
    cin >> n;

    bool end = false;
    long number = n-1;
    while (!end && number > 10000) {
        if (isPalindrom(number)) {
            bool divisible = false;
            long x = 100;
            while (x < 1000 && !divisible) {
                if (number % x == 0 && number/x <= 999 && number/x >= 100) {
                    divisible = true;
                } else {
                    x++;
                }
            }
            if (x >= 100 && x <= 999 && number/x >= 100 && number/x <= 999) {
                end = true;
                cout << number << endl;
            }
        }
        number--;
    }
    return 0;
}