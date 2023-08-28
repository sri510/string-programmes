/*
Given an array of integers, rotate the array by a given number of positions to the right.
Input:
--------------------------------
Enter the size of the array: 5
Enter the elements of the array: 1 2 3 4 5
Enter the number of positions to rotate: 2
Output:
----------------------------------
Rotated array: 4 5 1 2 3
*/
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate_array(int arr[], int size, int positions) {
    positions = positions % size;

    reverse(arr, 0, size - 1);

    reverse(arr, 0, positions - 1);

    reverse(arr, positions, size - 1);
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int elements[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &elements[i]);
    }

    int rotate_amount;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &rotate_amount);
    rotate_array(elements, size, rotate_amount);


    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    return 0;
}
