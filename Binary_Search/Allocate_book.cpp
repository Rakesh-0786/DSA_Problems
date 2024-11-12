// Problem statement
// Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.



// There are ‘m’ number of students, and the task is to allocate all the books to the students.



// Allocate books in such a way that:

// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.


// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.



// If the allocation of books is not possible, return -1.



// Example:
// Input: ‘n’ = 4 ‘m’ = 2 
// ‘arr’ = [12, 34, 67, 90]

// Output: 113



#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int>& arr, int pages) {
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (pagesStudent + arr[i] <= pages) {
            pagesStudent += arr[i];
        } else {
            students += 1;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    if (m > n) {
        return -1;
    }
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int students = countStudents(arr, mid);

        if (students > m) {
            low = mid + 1;
        } else {
            ans = mid;         // Update answer with the current feasible solution
            high = mid - 1;    // Try for a smaller maximum pages limit
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of books and students: ";
    cin >> n >> m;
    vector<int> arr(n);

    cout << "Enter the pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findPages(arr, n, m);
    if (result == -1) {
        cout << "Not possible to allocate books to each student." << endl;
    } else {
        cout << "The minimum possible maximum pages assigned to a student is: " << result << endl;
    }

    return 0;
}
