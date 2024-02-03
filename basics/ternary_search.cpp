// Ternary Search in  CPP

#include <iostream>
using namespace std;

int ternary_search(int arr[], int n, int key) {
    int s = 0;
    int e = n;
    while(s <= e) {
        int mid1 = s + (e-s)/3;
        int mid2 = e - (e-s)/3;
        if(arr[mid1] == key) {
            return mid1;
        }
        else if(arr[mid2] == key) {
            return mid2;
        }
        else if(arr[mid1] > key) {
            e = mid1 - 1;
        }
        else if(arr[mid2] < key) {
            s = mid2 + 1;
        }
        else {
            s = mid1 + 1;
            e = mid2 - 1;
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
    int index = ternary_search(arr, n, key);
    if(index == -1) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Key found at index " << index << endl;
    }
    return 0;
}