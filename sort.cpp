#include "sort.h"

void qSort(int * a, int p, int r);
int qPartition(int * a, int p, int r);
void arraySwap(int * a, int s, int d);


void iSort(int * a, int length) {
    qSort(a, 0, length - 1);
}

void qSort(int * a, int p, int r) {
    if(p < r) {
        int q = qPartition(a, p, r);
        qSort(a, p, q - 1);
        qSort(a, q + 1, r);
    }
}

int qPartition(int * a, int p, int r) {
    int x = a[r];
    int i = p - 1;
    int j;
    for ( j = p; j < r; j ++) {
        if ( a[j] < x) {
            i ++;
            arraySwap(a, i, j);
        }
    }
    arraySwap(a, i + 1, j);
    return i + 1;
}

void arraySwap(int * a, int s, int d) {
    int temp = a[s];
    a[s] = a[d];
    a[d] = temp;
}
