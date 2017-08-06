#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int numTopic(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '1' || b[i] == '1') {
            cnt++;
        }
    }
    return cnt;
}

void solve(vector<string> &topic) {
    int n = topic.size();
    int maxTopic = 0, numTeam = 0;
    unordered_map<int,int> myHash;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i+1; j < n; ++j) {
            int tmp = numTopic(topic[i], topic[j]);
            maxTopic = max(maxTopic, tmp);
            if (myHash.find(tmp) != myHash.end()) {
                myHash[tmp]++;
            } else {
                myHash[tmp] = 1;
            }
        }
    }
    cout << maxTopic << "\n" << myHash[maxTopic] << endl;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    solve(topic);
    return 0;
}
