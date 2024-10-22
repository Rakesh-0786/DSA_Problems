#include <iostream>
#include <vector>

void findLeaders(const std::vector<int>& arr) {
    int n = arr.size();

    // Traverse the array from the first element to the second-last element
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        
        // Check if the current element is greater than all elements to its right
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        
        // If it is a leader, print it
        if (isLeader) {
            std::cout << arr[i] << " ";
        }
    }
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    std::cout << "Leaders in the array: ";
    findLeaders(arr);
    return 0;
}
