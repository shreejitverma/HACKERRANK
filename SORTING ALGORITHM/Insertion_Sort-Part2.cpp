#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
// OK seems we should use these pre-written codes. Clearly it's an recursion.
// It's a pain to write on other's code though...
int N;
void insertionSort(int ar_size, int *  ar) {
    if (ar_size>=2)
        insertionSort(ar_size-1, ar);
    else
        return;
    int tmp = ar[ar_size-1];
    for (int i=ar_size-2;i>=0;i--)
    {
        if (tmp > ar[i])
        {
            for (int j=ar_size-2;j>i;j--)
                ar[j+1] = ar[j];
            ar[i+1] = tmp;
            break;
        }
    }
    if (tmp < ar[0])
    {
        for (int j=ar_size-2;j>=0;j--)
            ar[j+1] = ar[j];
        ar[0] = tmp;
    }
    for (int i=0;i<N;i++)
        printf("%d ",ar[i]);
    printf("\n");
    return;
}
int main(void) {

    int _ar_size;
    cin >> _ar_size;
    N = _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]);
    }

   insertionSort(_ar_size, _ar);

   return 0;
}
