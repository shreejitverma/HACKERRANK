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
    string s;
    cin >> s;
    long long int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        long long int x;
        cin >> x;
        int flag=0;
        vector <long long int> v(26,0);
        for(long long int k=0;k<s.length();k++)
            {
            ++v[s[k]-'a'];
            long long int i;
            long long int j;
            i=s[k]-'a';
            j=v[i];
            if(j*(i+1)==x){
               flag=1;
               }

        }
        if(flag==0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }

    return 0;
}
