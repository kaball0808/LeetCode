class MyCircularQueue {
public:    
    int head = 0, tail = -1, cqsize;
    vector<int> cq;

    MyCircularQueue(int k) {
        cq.resize(k);
        cqsize = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        tail = (tail + 1) % cqsize;
        cq[tail] = value;
        return true;        
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        //only have one element case
        if(head == tail) {
            head = 0;
            tail = -1;
        }
        else head = (head + 1)% cqsize;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        else return cq[head];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        else return cq[tail];
    }
    
    bool isEmpty() {
        return tail == -1;
    }
    
    bool isFull() {
        return !isEmpty() && (tail + 1) % cqsize == head;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */