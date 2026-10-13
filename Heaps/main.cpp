
#include <iostream>
#include "prototypes.h"
using namespace std;
int main()
{
    struct MinHeap *h = createMinHeap(11);
    insertKey(h, 3);
    insertKey(h, 2);
    deleteKey(h, 1);
    insertKey(h, 15);
    insertKey(h, 5);
    insertKey(h, 4);
    insertKey(h, 45);
    printf("%d ", extractMin(h));
    printf("%d ", getMin(h));
    decreaseKey(h, 2, 1);
    printf("%d", getMin(h));

    // Free allocated memory
    free(h->harr);
    free(h);
    return 0;
}