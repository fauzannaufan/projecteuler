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

unsigned long long toNumber(char c) {
    return (unsigned long long)c - 48;
}

unsigned long long start(string num, int a, int k) {
    unsigned long long product = 1;
    for (int x=a;x<a+k;x++) {
        product *= toNumber(num[x]);
    }
    return product;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    string num;
    cin >> num;

    unsigned long long largest, product = 0;
    int iter = 0;
        while (product == 0 && iter+k-1 < n) {
            product = start(num,iter,k);
            iter++;
        }
    iter--;
    //cout << iter+k-1 << " " << product << endl;
    largest = product;
    for (int x=iter+k;x<n;x++) {
        product = product * toNumber(num[x]) / toNumber(num[x-k]);

        if (product == 0) {
            while (product == 0 && x+k-1 < n) {
                product = start(num,x,k);
                x++;
            }
            x = x+k-2;
        }

        if (largest < product) {
            largest = product;
        }
    }
    cout << largest << endl;
    return 0;
}