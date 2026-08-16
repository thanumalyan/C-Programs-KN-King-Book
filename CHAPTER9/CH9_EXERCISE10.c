#include <stdio.h>

//Write functions that return the following values. (Assume that a and n are parameters,
//where a is an array of int values and n is the length of the array.)
//(a) The largest element in a.
//(b) The average of all elements in a.
//(c) The number of positive elements in a.

int largestInArray(int n, int a[n]);
float averageArray(int n, int a[n]);
int numberOfPositiveElements(int n, int a[n]);

int main(void)
{
    int size, choice;
 
    printf("\t\t--OPERATIONS ON INT ARRAY ELEMENTs--\n\nEnter the array size: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size!!!\nExited from the program.\n");
        return 0;
    }

    int array[size];

    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);

    }


    for (;;) {
        printf("\nOperations available:\n1. Finds the largest int\n2. Finds the average of the elements\n3. Finds the number of positive elements\n4. Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Largest element: %d\n", largestInArray(size, array)); break;
            case 2: printf("Average of all the elements: %.3f\n", averageArray(size, array)); break;
            case 3: printf("The number of all positive elements: %d\n", numberOfPositiveElements(size, array)); break;
            case 4: printf("Successfully exited\n"); 
                    return 0;
            default: printf("\n\n\tPlease... Enter a valid choice\n");
        }
    }

}

int largestInArray(int n, int a[n]) 
{
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    return max;
}

float averageArray(int n, int a[n]) 
{
    float average = 0.0f;
    for (int i = 0; i < n; i++) average += a[i];
    return average / n;
}

int numberOfPositiveElements(int n, int a[n])
{
    int count = 0;
    for (int i = 0; i < n; i++) if (a[i] > 0) count++;
    return count;
}

