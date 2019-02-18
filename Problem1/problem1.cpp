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

int main(){
    int n;
    cin >> n;

    // Divisible by 3
    unsigned long long lim_3 = (unsigned long long)(n-1)/3;
    unsigned long long result_3 = 3 * (1+lim_3)*lim_3 / 2;

    // Divisible by 5
    unsigned long long lim_5 = (unsigned long long)(n-1)/5;
    unsigned long long result_5 = 5 * (1+lim_5)*lim_5 / 2;

    // Divisible by 15
    unsigned long long lim_15 = (unsigned long long)(n-1)/15;
    unsigned long long result_15 = 15 * (1+lim_15)*lim_15 / 2;

    unsigned long long result = result_3 + result_5 - result_15;
    cout << result << endl;
    return 0;
}