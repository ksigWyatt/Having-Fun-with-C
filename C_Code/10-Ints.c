#include <stdlib.h>
#include <stdio.h>

// make the swaps
void swap(int *num1, int *num2) {
    int swapped = *num1;
    *num1 = *num2;
    *num2 = swapped;
}

void bubbleSort(int Ints[], int number) {
    int i,j;

    for (int i = 0; i < number - 1; i++) {
        for (int j = 0 ; j < number - i - 1; j ++) {
            if (Ints[j] > Ints[j + 1]) {
                swap(&Ints[j], &Ints[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(int argc, char **argv) {

    // create an array
    int Ints[] = {3, 2, 5, 4, 1, 6, 7, 10, 9, 8};
    int size = sizeof(Ints)/sizeof(Ints[0]);

    //Compute - Output
    printf("\nThe input is: ");
    printArray(Ints, size);
    printf("\nSize of array is: %d", size);
    bubbleSort(Ints, size);
    printf("\nThe output is: ");
    printArray(Ints, size);
   	return 0;
}