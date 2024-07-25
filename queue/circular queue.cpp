class MyCircularQueue {
public:
int *arr;
int size;
int front;
int rear;
    MyCircularQueue(int k) {
        this->size=k;
        arr = new int[size];
        front =-1;
        rear=-1;
        }
    
    bool enQueue(int value) {
        // overflow
        // empty
        // circular nature
        // normal push
        if((rear == size-1 && front ==0) || (rear + 1 == front))
        {
            return false;
        }
        else if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            arr[rear]=value;
            return true;
        }
        else if((rear==size-1 && front!=0) || (rear +1 == front))
        {
            
            rear=0;
            arr[rear]=value;
            return true;
        }
        else{
            rear++;
            arr[rear]=value;
            return true;

        }
        
    }
    
    bool deQueue() {
        // underflow
        // single ele
        // circular nature
        // normal deletion
        if(front ==-1 && rear==-1)
        {
            return false;
        }
        else if( front == rear)
        {
            front =-1;
            rear=-1;

            return true;
        }
        else if (front == size-1)
        {
            
            front =0;
            return true;
        }
        else{
            front++;
          
            return true;

        }
        
    }
    
    int Front() {
        if(front ==-1 && rear==-1)
        {
            return -1;
        }
        return arr[front];
        
    }
    
    int Rear() {
        if(front ==-1 && rear==-1)
        {
            return -1;
        }
        return arr[rear];
        
    }
    
    bool isEmpty() {
        if(front ==-1 && rear==-1)
        {
            return true;
        }
        return false;
        
    }
    
    bool isFull() {
        if((rear == size-1 && front ==0) ||(rear+1 == front))
        {
            return true;
        }
        return false;
        
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
