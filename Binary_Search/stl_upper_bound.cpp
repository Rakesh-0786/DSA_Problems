// upper_bound(arr.begin(), arr.end(), n) - arr.begin();
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = 10;
    int index = upper_bound(arr.begin(), arr.end(), n) - arr.begin();
    cout << "The upper bound of " << n << " is at index " << index << std::endl;
    return 0;
}
