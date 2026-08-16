#include <stdio.h>

//1. Write a program that asks the user to enter a series of integers (which it stores in an array),
//then sorts the integers by calling the function selection_sort. When given an array
//with n elements, selection _ sort must do the following:
//l. Search the array to find the largest element, then move it to the last position in the array.
//2. Call itself recursively to sort the first n — 1 elements of the array.

void selection_sort (int size, int array[size]);

int main(void) 
{
    int size;

    printf("\t\t--TESTING THE  RECURSIVE SORTING ARRAY FUNCTION--\n\n");

    printf("Choose a number of digits to enter: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("INVALID SIZE!!!\nEXITED FROM THE PROGRAM\n");
        return 0;
    }

    int integers[size];

    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) scanf("%d", &integers[i]);

    selection_sort(size, integers);

    printf("Array elements after sorting:\n\n");
    for (int i = 0; i < size; i++) printf("%d ", integers[i]);

    printf("\n");

    return 0;
}

void selection_sort (int n, int array[n])
{
    if (n <= 1)
        return;
    int max = array[0], marker = 0;

    for (int i = 1; i < n; i++) 
        if (array[i] > max) {
            max = array[i];
            marker = i;
        }

    array[marker] = array[--n];
    array[n] = max;

    selection_sort (n, array);
}
