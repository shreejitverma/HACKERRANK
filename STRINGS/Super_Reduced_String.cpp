#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    vector <char> s;
    char temp;
    while(scanf("%c",&temp)==1){
        if(s.empty()) s.push_back(temp);
        else {
            if(s[s.size() - 1] == temp) s.pop_back();
            else s.push_back(temp);
        }
    }
    if(s.empty()) printf("Empty String\n");
    else {
        for(int i=0;i<s.size();i++) printf("%c",s[i]);
    }
    return 0;
}
