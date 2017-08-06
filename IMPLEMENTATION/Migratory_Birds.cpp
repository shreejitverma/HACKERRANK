#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    map<int,int> a;
    int max=0;
    int c;
    int j=0;
    while(j<n){
       a[ar[j]]++;
       // cout<<a[ar[j]]<<" ";
        j++;
    }
    for(int i=5;i>0;i--){
        if(a[i]>=max){
            max=a[i];
            c=i;
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
