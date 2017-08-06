#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nt, n;
    vector<int> A(n);
    vector<int> B(n);
    scanf("%d", &nt);
    while(nt--) {
        scanf("%d", &n);
        fprintf(stderr, "N = %d\n", n);
        for(int i=0;i<n;i++) {
            scanf("%d", &A[i]);
            if(n==3) {
                fprintf(stderr, "%d\n", A[i]);
            }
        }

        for(int i=0;i<n;i++) {
            scanf("%d", &B[i]);
        }
        int nimber = 0;
        for(int i=0;i<n;i++) {
            int heap = abs(B[i] - A[i]) - 1;
            nimber ^= heap;
        }
        puts(nimber?"player-2":"player-1");
    }
    return 0;
}
