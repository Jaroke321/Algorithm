#include <stdio.h>
#include <iostream>

void insertionSort(int arr[], int n) {

    // Go through each value in the array and place it in the correct spot
    for(int i = 1; i < n; i++) {

        int value = arr[i]; // Grab the current value in the array
        int j = i;          // Create a variable j that is initialized to i

        // Go until the correct position is found 
        while((j > 0) && (arr[j - 1] > value)) {

            // If the value to the left is greater than the current value
            arr[j] = arr[j - 1]; // set current positions value to the value to the left
            j--;                 // Decrement j

        }
        // Correct position is found
        arr[j] = value;

    }

}

int main() {

    // Create a non sorted array of random integers
    int arr[50];
    int size = sizeof(arr) / sizeof(arr[0]);  // Get the size of the array

    for(int i = 0; i < size; i++) {

        arr[i] = (rand() % 100) + 1;  // Assign random values between 1 and 100

    }

    // print the pre sorted array
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
    }
    
    // Sort the list
    insertionSort(arr, size);

    // Print the sorted list below the unsorted list 
    std::cout << "\n";

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
}