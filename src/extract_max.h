/*
  Quiz 7: Extract Max

  Write C++ code for a function, extractMax() that takes as input 
  a max heap, arr represented as an integer array and the size of 
  the array, size. The function deletes the maximum element in the 
  max heap and returns the new max heap array after deletion.

  Sample Input:
    3
    9 8 7
  
  Sample Output:
    8 7
		
	Explanation:

	Input:  Line 1 denotes the number of elements, size in the 
            heap. Line 2 denotes the contents of the max heap 
            that is passed into extractMax() function.
	
	Output: Output is the max heap after deletion.
*/

#include <iostream>
#include "heapFunctions.h"

int* extractMax(int arr[], int size)
{
  arr[0] = arr[--size];
  HeapifyDown(arr, size, 0);
	return arr; 
}
