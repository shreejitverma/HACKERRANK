#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    char c,a;
    std::string::iterator it;
    for(it=s.begin();it!=s.end();it++){
        c=*it;
        if(isalpha(c)){
            a = isupper(c)?'A':'a';
            c= a + (c - a + k)%26;
            cout << c;
        }
        else{
            cout<<*it;
        }
    }
    return 0;
}
