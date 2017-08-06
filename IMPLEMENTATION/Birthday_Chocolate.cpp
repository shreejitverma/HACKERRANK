#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int a,b,c=0;
    cin >> n;
    int ar[n];
    for(int i = 0;i < n;i++){
       cin >> ar[i];
    }
    cin>>a>>b;
    for(int i = 0;i < n;i++){
        int sum=0;
        int d=b;
        int j=i;
       while(d>0&&j<n){

           sum+=ar[j];
           j++;
           d--;
        }
        if(sum==a){
            c++;
        }
    }
    cout<<c;

    return c;
}
