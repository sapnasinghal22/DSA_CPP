class MyStack {
public:
queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++)
        {
            int ele =q.front(); 
            q.pop();
            q.push(ele);
        }
    }
    
    int pop() {
      int pop=-1;
      if(!q.empty())
      {
        pop=q.front();
        q.pop();
      }
      return pop;
        
    }
    
    int top() {
        if(!q.empty())
        {
            return q.front();
        }
        return -1;
        
        
    }
    
    bool empty() {
        if(q.empty())
        {
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
