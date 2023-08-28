/*
Given an array of integers, rearrange the elements in such a way that all the negative elements come before the positive elements, maintaining their relative order.
Input:
------------------------------------------
Enter the size of the array: 7
Enter the elements of the array: 6 -3 8 -5 2 -7 10
Output:
-------------------------------------------
Rearranged array: -3 -5 -7 6 8 2 10
*/
#include <stdio.h>  
void selectionsort(int arr[], int n);  
void swap(int *, int *);  
int main()  
{  
    int n, i;  
    printf("Enter the size of the Array: ");  
    scanf("%d", &n);  
    int arr[n];  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    selectionsort(arr, n);  
    printf("The final Array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", arr[i]);  
    }  
}  
void selectionsort(int arr[], int n)  
{  
    int i, j, min_in;  
    for(i = 0; i < n - 1; i++)  
    {  
        min_in = i;  
        for(j = i + 1; j < n; j++)  
        {  
            if(arr[j] < arr[min_in])  
            {  
                min_in = j;  
            }  
        }  
        swap(&arr[min_in], &arr[i]);  
    }  
}  
void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}
