#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,space,k;
    cin >> n;

    for(i=0;i<n;i++){
        for(space=1;space<n-i;++space)
        {
           cout<<" ";
        }
       for(k=n-i;k<=n;k++)
        {
           cout<<"#";

        }
        k=0;
        cout<<"\n";
    }
    return 0;
}
