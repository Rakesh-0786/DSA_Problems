#include <bits/stdc++.h>
using namespace std;

int findDays(vector<int>& weights, int cap) {
    int days = 1;
    int load = 0;
    for (int weight : weights) {
        if (load + weight > cap) {
            days++;
            load = weight;  // Start a new day with the current weight
        } else {
            load += weight;
        }
    }
    return days;
}

int leastWeightCapacity(vector<int>& weights, int d) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (findDays(weights, mid) <= d) {
            ans = mid;
            high = mid - 1;  // Try to find a smaller capacity
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 5;
    int result = leastWeightCapacity(weights, d);
    cout << "Minimum ship capacity to ship within " << d << " days: " << result << endl;
    return 0;
}
