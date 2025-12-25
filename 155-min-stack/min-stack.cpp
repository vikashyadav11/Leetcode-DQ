class MinStack {
public:
stack<int> s,st;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(st.empty() || st.top()>=val){
            st.push(val);
        }

    }
    
    void pop() {
        if(st.top()==s.top()){
            if(!st.empty())
                st.pop();
        }
        if(!s.empty())
            s.pop();
    }
    
    int top() {
        if(!s.empty())
            return s.top();
        return -1;
    }
    
    int getMin() {
        if(!st.empty())
            return st.top();
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */