// Smallest Positive missing number in an array
#include <iostream>

int findSmallestMissingNumber(int arr[], int size) {
    int smallestMissing = 1;

    while (true) {
        bool found = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == smallestMissing) {
                found = true;
                break;
            }
        }
        if (!found) {
            return smallestMissing;
        }
        smallestMissing++;
    }
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissingNumber(arr, size);
    std::cout << "The smallest positive missing number is: " << smallestMissing << std::endl;

    return 0;
}
