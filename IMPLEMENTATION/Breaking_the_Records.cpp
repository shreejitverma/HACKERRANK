#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int n;
    cin >> n;
    vector<int> ar(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> ar[arr_i];
    }
    int c_max=0;
    int c_min=0;
    int max=ar[0];
    int min=ar[0];
    for(int j=1;j<n;j++){
        if(ar[j]>max){
            max=ar[j];
            c_max++;
        }
        if(ar[j]<min){
            min=ar[j];
            c_min++;
        }

    }
    cout<<c_max<<" "<<c_min;
    return 0;
}
