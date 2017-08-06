#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k,i,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>n>>k;
        for(i = 0; i < n; i++)
            {
            int temp;
            cin>>temp;
            if(temp <= 0)
                count++;
        }
        if(count >= k)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
