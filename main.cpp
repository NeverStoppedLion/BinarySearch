#include <iostream>
#include "binarySearch.h"
#include "sort.h"

using namespace std;

int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int b[10] = {0, 1, 2, 3, 4, 6, 7, 8, 9, 10};
int c[10] = {9, 0, 2, 7, 8, 4, 1, 6, 5, 3};

int main()
{
    int indexAL, indexBL, indexAR, indexBR, indexCL;
    indexAL = BinarySearchLoop(a, 5, 10);
    indexBL = BinarySearchLoop(b, 5, 10);
    indexAR = BinarySearchRecurrence(a, 5, 0, 9);
    indexBR = BinarySearchRecurrence(b, 5, 0, 9);
    iSort(c, 10);
    indexCL = BinarySearchLoop(c, 5, 10);
    cout << indexAL << " " << indexBL << " " << indexCL << endl;
    cout << c[0] << ", " << c[9] <<endl;
    return 0;
}
