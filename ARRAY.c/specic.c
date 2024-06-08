#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

void insertElement(int arr[], int size, int position, int element) {
    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    size++;

    printf("Element inserted successfully.\n");
}

int main() {
    int arr[MAX_SIZE];
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    insertElement(arr, size, position, element);

    printf("Array after insertion:\n");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
