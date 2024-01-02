// Binary Search Algorithm in CPP

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int s = 0;
    int e = n;
    while(s <= e) {
        int mid = (s+e)/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
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
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;
    int index = binary_search(arr, n, key);
    if(index == -1) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Key found at index " << index << endl;
    }
    return 0;
}