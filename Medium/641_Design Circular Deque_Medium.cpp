//Problem: Design a circular deque with a fixed capacity that supports insertion, deletion, and retrieval of elements from both the front and rear.
//Solution: Use a circular array to store elements, with variables front, count, and capacity to manage the deque.
//Use modulo (%) arithmetic to wrap the indices around the array, allowing efficient insertion and deletion from both ends.

class MyCircularDeque {
    private:
    vector<int> arr;
    int front;
    int count;
    int capacity;

public:
    MyCircularDeque(int k) {
        arr.resize(k);
        front = 0;
        count = 0;
        capacity = k;
    }
    
    bool insertFront(int value) {
        if (isFull())
          return false;

        front = (front - 1 + capacity) % capacity;
        arr[front] = value;
        count++;

        return true;
    }
    
    bool insertLast(int value) {
        if (isFull())
            return false;

        int rear = (front + count) % capacity;
        arr[rear] = value;
        count++;

        return true;
    }
    
    bool deleteFront() {
         if (isEmpty())
            return false;

        front = (front + 1) % capacity;
        count--;

        return true;
    }
    
    bool deleteLast() {
        if (isEmpty())
            return false;

        count--;

        return true;
    }
    
    int getFront() {
        if (isEmpty())
            return -1;

        return arr[front];
    }
    
    int getRear() {
        if (isEmpty())
            return -1;

        int rear = (front + count - 1) % capacity;
        return arr[rear];

    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
         return count == capacity;
    }
};
