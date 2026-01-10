class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

// Queue class
class myQueue {
private:
    Node* front;
    Node* rear;

public:
    myQueue() {
        front = rear = nullptr;
    }
};