#include <stack>
#include <algorithm> // for min()
using namespace std;

class MinStack {
public:
    stack<int> st;       // Main stack
    stack<int> minStack; // Stack to keep track of minimum values

    // Constructor
    MinStack() {
        // No manual initialization needed, stacks start empty
    }
    
    // Push element onto stack
    void push(int val) {
        st.push(val);
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(min(val, minStack.top()));
        }
    }
    
    // Remove top element
    void pop() {
        st.pop();
        minStack.pop();
    }
    
    // Get top element
    int top() {
        return st.top();
    }
    
    // Retrieve minimum element in stack
    int getMin() {
        return minStack.top();
    }
};

/**
 * Example usage:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int topVal = obj->top();
 * int minVal = obj->getMin();
 */
