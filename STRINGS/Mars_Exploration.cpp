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
    int sum=0;
    string s;
    cin >> s;
    string p="SOS";
    std::string::iterator it;
    for(it=s.begin();it!=s.end();it+=3){
        char a,b,c;
        a=*it;
        b=*(it+1);
        c=*(it+2);
        if(a!=p[0]){
            sum+=1;

        }
        if(b!=p[1]){
            sum+=1;

        }
        if(c!=p[2]){
            sum+=1;

        }

    }
    cout<<sum;
    return 0;
}
