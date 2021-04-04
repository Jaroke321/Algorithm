#include <stdio.h>
#include <iostream>

int binarySearch(int arr[], int len, int target) {

    // Initialize the variables to start the search
    int start = 0; int end = len - 1;

    // Loop until the value is found or the array is exhausted
    while (start <= end)
    {
        
        // find the midpoint of the array 
        int mid = (start + end) / 2;

        // Target is found 
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target)  // The target is on the right half of the list
        {
            start = mid + 1;
        } else {                       // The target is on the left half of the list
            end = mid - 1;
        }
        
    }

    // Target was not found
    return -1;

}

// Demonstrates the BinarySearch algorithm in C++
int main() {
    // Create the start array 
    int arr[100];
    int target = 60;  // Search Target
    int idx;          // Idx of target

    // Load up the array with starting values 
    for(int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    // Print the array out
    for(int i = 0; i < 100; i++) {
        std::cout << "Index: " << i << ", Value: " << arr[i] << "\n";
    }

    std::cout << "\nSearching for target: " << target;
    idx = binarySearch(arr, 100, target);
    
    if (idx != -1) {
        std::cout << "\nFound " << target << " at position " << idx << "\n";
    } else {
        std::cout << "\nTarget was not found in the list\n";
    }

    return 0;
}