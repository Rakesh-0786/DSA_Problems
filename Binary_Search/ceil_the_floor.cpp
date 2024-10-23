#include<bits/stdc++.h>
using namespace std;

int findCeil(vector<int>& arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] >= x) {
            ans = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int findFloor(vector<int>& arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] <= x) {
            ans = arr[mid];  
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(vector<int>& arr, int n, int x) {
    int ceil = findCeil(arr, x, n);
    int floor = findFloor(arr, x, n);
    return {floor, ceil};  
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int n = arr.size();
    int x = 5;
    pair<int, int> result = getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << ", Ceil: " << result.second << endl;
    return 0;
}
