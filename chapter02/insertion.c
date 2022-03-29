#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[], int length) {
    int key, j, i;
    for (j = 1; j < length; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = key;
    }
}


void print(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    insertion(arr, sizeof(arr)/sizeof(arr[0]));
    print(arr, sizeof(arr)/sizeof(arr[0]));
}
