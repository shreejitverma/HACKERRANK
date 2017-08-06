#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    char a[n];
    int sum[n];
    sum[0]=0;
    int valley=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]=='U'){
            sum[i]=sum[i-1]+1;
        }
        if(a[i]=='D'){
            sum[i]=sum[i-1]-1;
        }
        if(sum[i]==0&&sum[i-1]<0){
            valley+=1;

        }
        //cout<<sum[i]<<" ";
    }
    cout<<valley;
    return 0;
}
