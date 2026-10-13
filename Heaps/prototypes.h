#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a Min Heap
struct MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
};

// Function prototypes
void swap(int *x, int *y);
struct MinHeap *createMinHeap(int capacity);
void MinHeapify(struct MinHeap *h, int i);
int extractMin(struct MinHeap *h);
void decreaseKey(struct MinHeap *h, int i, int new_val);
void deleteKey(struct MinHeap *h, int i);
void insertKey(struct MinHeap *h, int k);

// Inline helper functions
inline int parent(int i)
{
    return (i - 1) / 2;
}
inline int left(int i)
{
    return (2 * i + 1);
}
inline int right(int i)
{
    return (2 * i + 2);
}
inline int getMin(struct MinHeap *h)
{
    return h->harr[0];
}

#endif // PROTOTYPES_H