#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// Find the maximum height!
int main() {
    int h[26];
    for (int i=0; i<26; i++)
        scanf("%d", &h[i]);
    char str[100];
    scanf("%s", str);
    int maxi = 0, len = strlen(str);
    for (int i=0; i<len; i++)
        if (h[str[i]-'a'] > maxi)
            maxi = h[str[i]-'a'];
    printf("%d\n", maxi * len);
    return 0;
}
