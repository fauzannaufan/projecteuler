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

    long sumofsquare = 0, squareofsum = 0;
    for (int i=1;i<=n;i++) {
        sumofsquare += i*i;
        squareofsum += i;
    }
    cout << squareofsum * squareofsum - sumofsquare << endl;
    return 0;
}