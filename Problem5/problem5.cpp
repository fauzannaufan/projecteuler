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

    int x = n;
    bool end = false;
    while (!end) {
        bool div = true;
        for (int i=1;i<=n;i++) {
            if (x % i != 0) {
                div = false;
            }
        }
        if (div) {
            end = true;
        } else {
            x++;
        }
    }
    cout << x << endl;
    return 0;
}