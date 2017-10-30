#include <stdio.h>

/**
 * Prints the arrays contents to the console
 *
 * @param arr - the array to print
 * @param len - the length of the array to print
 */
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i < len - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

/**
 * This is a helper method that abstracts away
 * the inner loop of the bubble sort problem.
 *
 * @param arr - the array to sort
 * @param n - the length of the array
 */
void sort(int arr[], int n) {
    for(int j = 0; j < n; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

/**
 * Performs the bubble sort on the array.
 *
 * @param arr - the array to sort
 * @param n - the size of the array to sort
 */
void bubblesort(int arr[], int n) {
    // have to execute so many passes
    for (int i = 0; i < n; i++) {
        // compare the elements on each pass
        sort(arr, n);
        printf("After pass %d : ", i);
        // print the array after every pass
        printArray(arr, n);
    }
}

int main()
{
    // an array of dummy data
    int arr[] = {10, 7, 3, 1, 9, 7, 4, 3};

    // size of will return the size in bytes.
    // dividing by the size of an integer returns
    // the number of elements in the array.
    int len = sizeof(arr) / sizeof(int);

    printf("Initial Array : \n");
    printArray(arr, len);
    bubblesort(arr, len);
    return 0;
}