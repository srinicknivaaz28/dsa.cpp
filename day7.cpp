#include<iostream>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
             // Return false if array is not sorted
        }
        else
        return false; 
    }
    return true;  // Return true if array is sorted
}

int main() {
    // Correct variable declaration
    int arr[] = {1, 2, 3, 4, 5};  
    int n = 5;  // Size of the array
    
    // Call the isSorted function and store the result
    bool result = isSorted(arr, n);
    
    // Output the result as "True" or "False"
    cout << (result ? "True" : "False") << endl;

    return 0;
}
