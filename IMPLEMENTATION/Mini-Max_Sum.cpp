#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Sort. The minimal comes from summing up the first four, and the maximal is summing up the last four.
int main() {
    int arr[5];
    for (int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+5);
    printf("%lld %lld\n", (long long)arr[0] + arr[1] + arr[2] + arr[3],
                          (long long)arr[1] + arr[2] + arr[3] + arr[4]);
    return 0;
}
