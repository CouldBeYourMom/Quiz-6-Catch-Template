#include "heapFunctions.h"

void HeapifyDown(int arr[], int size, int index) {
    // Your implementation goes here
    int lc = (2 * index) + 1;
    int rc = (2 * index) + 2;
    int largest = index;

    if (lc < size && arr[lc] > arr[largest]) {
        largest = lc;
    }
    if (rc < size && arr[rc] > arr[largest]) {
        largest = rc;
    }
    if (largest != index) {
        std::swap(arr[index], arr[largest]);
        HeapifyDown(arr, size, largest);
    }
}