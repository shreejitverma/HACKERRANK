#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int A, int B) {
    int ret = 0;
    double start = sqrt(A), end = sqrt(B);
    if (start - (int)start < 1e-6) {
        ret++;
        start++;
    }
    if (end - (int)end < 1e-6) {
        ret++;
        end--;
    }
    start = ceil(start); end = floor(end);
    ret += (end - start + 1);
    return ret;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    int A, B;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cin >> A >> B;
        cout << solve(A, B) << endl;
    }
    return 0;
}
