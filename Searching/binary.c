#include <stdio.h>

int binary_search(int a[], int n, int search_item) {
    int beg = 0;
    int end = n - 1;
    int mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (a[mid] == search_item) {
            return mid; // Item found, return the index
        } else if (search_item < a[mid]) {
            end = mid - 1; // Adjust the end to search in the left half
        } else {
            beg = mid + 1; // Adjust the beg to search in the right half
        }
    }

    return -1; // Item not found, return -1
}

int main() {
    int a[] = {2, 7, 8, 9, 11, 16, 20};
    int n = sizeof(a) / sizeof(a[0]);
    int search_item = 11;

    int loc = binary_search(a, n, search_item);

    if (loc != -1) {
        printf("Element %d found at index %d\n", search_item, loc);
    } else {
        printf("Element %d not found in the array\n", search_item);
    }

    return 0;
}



