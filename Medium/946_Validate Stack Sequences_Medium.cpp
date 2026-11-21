//Problem: Determine whether a given popped sequence can be produced from a pushed sequence using valid stack operations.
//Solution: Use an auxiliary stack to simulate the push and pop operations.
//Push each element from pushed onto the stack and repeatedly pop whenever the stack's top matches the next expected element in popped. If all elements are popped successfully, return true.

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;
        int j = 0;

        for (int x : pushed) {
            st.push(x);

            while (!st.empty() && st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }

        return st.empty();

    }
};
