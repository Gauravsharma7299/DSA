//  Find Majority of elements in an array
#include <iostream>
using namespace std;
int findMajorityElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > size / 2) {
            return arr[i];
        }
    }
    return -1; // No majority element found
}

int main() {
    int arr[] = {1, 1, 3, 1, 4, 1, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, size);
    if (majorityElement != -1) {
        std::cout << "The majority element is: " << majorityElement << std::endl;
    } else {
        std::cout << "No majority element found." << std::endl;
    }

    return 0;
}
