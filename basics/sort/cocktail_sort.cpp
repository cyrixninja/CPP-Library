// Cocktail Sort in CPP

#include <iostream>
using namespace std;

void cocktail_sort(int arr[], int n) {
    bool swapped = true;
    int start = 0;
    int end = n-1;
    while(swapped) {
        swapped = false;
        for(int i=start; i<end; i++) {
            if(arr[i]>arr[i+1]) {
                swap(arr[i], arr[i+1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
        swapped = false;
        end--;
        for(int i=end-1; i>=start; i--) {
            if(arr[i]>arr[i+1]) {
                swap(arr[i], arr[i+1]);
                swapped = true;
            }
        }
        start++;
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
    cocktail_sort(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}