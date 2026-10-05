#include <stdio.h>

int main() {

    int a[20];
    int i, largest, smallest;
    int search, index;
    int newnum, insertindex;
    int deleteindex;

    // 1. Take 8 elements
    printf("Enter 8 elements:\n");

    for (i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }

    // 2. Print complete array
    printf("Array: ");

    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }

    // 3. Find largest and smallest
    largest = a[0];
    smallest = a[0];

    for (i = 1; i < 8; i++) {

        if (a[i] > largest) {
            largest = a[i];
        }

        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    printf("\nLargest: %d", largest);
    printf("\nSmallest: %d", smallest);

    // 4. Search a number
    printf("\nEnter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 8; i++) {

        if (a[i] == search) {
            printf("Number found at index %d\n", i);
            break;
        }
    }

    // 5. Insert a new number
    printf("Enter number to insert: ");
    scanf("%d", &newnum);

    printf("Enter index: ");
    scanf("%d", &insertindex);

    for (i = 8; i > insertindex; i--) {
        a[i] = a[i - 1];
    }

    a[insertindex] = newnum;

    // 6. Delete an element
    printf("Enter index to delete: ");
    scanf("%d", &deleteindex);

    for (i = deleteindex; i < 8; i++) {
        a[i] = a[i + 1];
    }

    // 7. Print final array
    printf("Final Array: ");

    for (i = 0; i < 8; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}