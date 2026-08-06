#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


void bubbleSort(int arr2[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr2[j] > arr2[j + 1]) {
                swap(arr2[j], arr2[j + 1]);
            }
        }
    
    }
    
}

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Yuvraj Insertion & bubble short \n";

    int arr[] = {1, 32, 53, 4, 45, 6, 73, 8};
    int arr2[] = {1, 23, 13, 42, 47, 6, 70, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);


    bubbleSort(arr2, size2);
    printarr(arr2, size2 );
    insertionSort(arr, size);

    printarr(arr, size);

    return 0;
}