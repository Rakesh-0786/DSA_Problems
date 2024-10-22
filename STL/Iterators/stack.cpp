#include <bits/stdc++.h>
using namespace std;

void explainStack() {
    stack<int> st;

    // Push elements into the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    // Print the top element of the stack
    cout << "Top element: " << st.top() << endl;  // Prints 6

    // Pop the top element
    st.pop();

    // Print the new top element after pop
    cout << "New top element after pop: " << st.top() << endl;  // Prints 5

    // Print the size of the stack
    cout << "Stack size: " << st.size() << endl;  // Prints the size

    // Swapping two stacks
    stack<int> st1, st2;
    
    // Add elements to st1 for demonstration
    st1.push(10);
    st1.push(20);

    // Print top element of st1 before swap
    cout << "Top of st1 before swap: " << st1.top() << endl;

    // Swap st1 and st2
    st1.swap(st2);

    // Print the top of st2 (which is now st1's old content)
    if (!st2.empty()) {
        cout << "Top of st2 after swap: " << st2.top() << endl;  // Now st2 has 20
    } else {
        cout << "st2 is empty!" << endl;
    }
}

int main() {
    explainStack();
    return 0;
}
