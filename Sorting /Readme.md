# Bubble Sort
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort. Working of Bubble Sort Suppose we are trying to sort the elements in ascending order.

First Iteration (Compare and Swap)
a)Starting from the first index, compare the first and the second elements. b)If the first element is greater than the second element, they are swapped. c)Now, compare the second and the third elements. Swap them if they are not in order. d)The above process goes on until the last element. 2. Remaining Iteration

The same process goes on for the remaining iterations.

After each iteration, the largest element among the unsorted elements is placed at the end. In each iteration, the comparison takes place up to the last unsorted element. The array is sorted when all the unsorted elements are placed at their correct positions.

# Bubble Sort Algorithm
bubbleSort(array) for i <- 1 to indexOfLastUnsortedElement-1 if leftElement > rightElement swap leftElement and rightElement end bubbleSort

# Optimized Bubble Sort Algorithm
In the above algorithm, all the comparisons are made even if the array is already sorted.

This increases the execution time.

To solve this, we can introduce an extra variable swapped. The value of swapped is set true if there occurs swapping of elements. Otherwise, it is set false.

After an iteration, if there is no swapping, the value of swapped will be false. This means elements are already sorted and there is no need to perform further iterations.

This will reduce the execution time and helps to optimize the bubble sort.

# Algorithm for optimized bubble sort is
bubbleSort(array) swapped <- false for i <- 1 to indexOfLastUnsortedElement-1 if leftElement > rightElement swap leftElement and rightElement swapped <- true end bubbleSort
