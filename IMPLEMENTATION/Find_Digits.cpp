#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n) {
    int ori = n;
    int ret = 0;
    int digit;
    while (n > 0) {
        digit = n % 10;
        if (digit != 0) {
            ret += (ori % digit == 0? 1:0);
        }
        n /= 10;
    }
    return ret;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
