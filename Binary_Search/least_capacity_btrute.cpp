#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the minimum days needed with a given capacity
int findDaysWithCapacity(vector<int>& weights, int capacity) {
    int days = 1;  // Start with the first day
    int load = 0;
    
    for (int weight : weights) {
        if (load + weight > capacity) {
            days++;  // Use another day
            load = 0;
        }
        load += weight;
    }
    return days;
}

// Function to find the minimum ship capacity using brute force
int shipWithinDays(vector<int>& weights, int days) {
    int maxWeight = *max_element(weights.begin(), weights.end());
    int sumWeights = accumulate(weights.begin(), weights.end(), 0);

    // Try each possible capacity from maxWeight to sumWeights
    for (int capacity = maxWeight; capacity <= sumWeights; capacity++) {
        if (findDaysWithCapacity(weights, capacity) <= days) {
            return capacity;  // Found the minimum capacity that works
        }
    }
    return sumWeights;  // In worst case, return sum of weights
}

int main() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << "Minimum ship capacity to ship within " << days << " days: " << shipWithinDays(weights, days) << endl;
    return 0;
}
