//Problem: Implement a Stack (LIFO) using Queues (FIFO), supporting push, pop, top, and empty operations.
//Solution: Use two queues, q1 and q2, to simulate stack behaviour.
//Insert new elements into q2, move all elements from q1 into q2, then swap the queues. This ensures the most recently inserted element always stays at the front.

class MyStack {
    private:
    queue<int> q1, q2;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
         return q1.empty();
    }
};

