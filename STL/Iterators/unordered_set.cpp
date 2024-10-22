#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // Duplicate, will not be added
    us.insert(90);
    us.insert(50);
    us.insert(50);


    // Print elements
    cout << "Elements in the unordered_set: ";
    for (auto it : us) {
        cout << it << " ";
    }
    cout << endl;

    // Check if an element is present
    if (us.find(20) != us.end()) {
        cout << "Element 20 is present in the unordered_set." << endl;
    } else {
        cout << "Element 20 is not present in the unordered_set." << endl;
    }

    return 0;
}
