#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int arr[MAX_SIZE], i, n, pos;

    // Input array elements
    printf("Enter %d elements:\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to remove
    printf("Enter the position to remove (1 to %d): ", MAX_SIZE);
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 1 || pos > MAX_SIZE) {
        printf("Invalid position!\n");
        return 1;
    }

    // Remove element at the specified position
    pos--; // Adjust to array index
    for (i = pos; i < MAX_SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    printf("Array after removing element at position %d:\n", pos + 1);
    for (i = 0; i < MAX_SIZE - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}