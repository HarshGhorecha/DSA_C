#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // Input length of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
 
    // Input elements of the first array
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input length of the second array
    printf("\nEnter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements of the second array
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Find common elements
    printf("\nCommon elements between the two arrays are:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // To avoid duplicate prints for the same element
            }
        }
    }

    return 0;
}
