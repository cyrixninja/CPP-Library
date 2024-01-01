// Linear Search in CPP


#include <iostream>
using namespace std;


int linear_search(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
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
    int index = linear_search(arr, n, key);
    if(index == -1) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Key found at index " << index << endl;
    }
    return 0;
}