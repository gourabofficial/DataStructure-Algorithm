#include <stdio.h>

// Function to perform selection sort on an array
void selection_sort(int a[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        // Assume the current index is the minimum
        min_idx = i;

        // Find the index of the minimum element in the unsorted part
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}

// Main function
int main() {
    // Input array
    int array[] = {15, 23, 32, 1, 8, 90, 7};
    int i, n = 7;

    // Call selection_sort function to sort the array
    selection_sort(array, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

    return 0;
}
