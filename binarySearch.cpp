#include "binarySearch.h"

int BinarySearchLoop(int * a, const int x, const int n) {
    int left = 0;
    int right = n - 1;
    int middle = 0;
    while(left <= right) {
        middle = (left + right) / 2;
        if(x < a[middle]){
            right = middle - 1;
        }
        else if(x > a[middle]) {
            left = middle + 1;
        }
        else {
            return middle;
        }
    }
    return -1;
}

int BinarySearchRecurrence(int *a, const int x, const int left, const int right) {
    if (left > right)
        return -1;
    int middle = (left + right) / 2;
    if (x == a[middle])
        return middle;
    else if(x < a[middle])
        return BinarySearchRecurrence(a, x, left, middle - 1);
    else
        return BinarySearchRecurrence(a, x, middle + 1, right);
}
