// Quick Sort Algorithm in CPP

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}

void quick_sort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1, high);
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n-1);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}