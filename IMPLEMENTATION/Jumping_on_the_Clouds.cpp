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
int main() {
    int n,a[100],count=0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n]=2;
    for(int i = 0; i < n-1;i++ )
        {
        if(a[i+2]==0)
            {
            i++;
            count++;
        }
       else if(((a[i+2]==1)&&(a[i+1]==0))||(a[i+2]==2)){

            count++;
        }
      }
    cout<<count;
    return 0;
}
