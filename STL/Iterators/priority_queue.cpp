#include <bits/stdc++.h>
using namespace std;

void explainPriorityQueue() {
    // Max-Heap Priority Queue
    priority_queue<int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(5);
    pq.emplace(10);

    // Print the top element of the max-heap
    cout << "Top element of max-heap: " << pq.top() << endl;  // Should print 10

    // Pop the top element
    pq.pop();

    // Print the new top element of the max-heap
    cout << "New top element of max-heap after pop: " << pq.top() << endl;  // Should print 5

    // Min-Heap Priority Queue
    priority_queue<int, vector<int>, greater<int>> gp;
    gp.push(5);
    gp.push(6);
    gp.push(7);
    gp.push(9);
    gp.push(130);

    // Print the top element of the min-heap
    cout << "Top element of min-heap: " << gp.top() << endl;  // Should print 5
}

int main() {
    explainPriorityQueue();
    return 0;
}




