class MinStack {
public:
    stack<long long> s ; 
    long long minEle ;
    MinStack() {
        
    }
    
    void push(int val) {
        if ( s.empty() ) {
            minEle = val ; 
            s.push(val) ; 
        }
        else if ( val < minEle ) {
            long long v = 2LL*val - minEle ; 
            s.push(v) ; 
            minEle = val ; 
        }
        else {
            s.push(val) ; 
        }
    }
    
    void pop() {
        long long t = s.top() ; 
        s.pop() ; 
        if ( t < minEle ) {
            minEle = 2LL* minEle - t ; 
        }
    }
    
    int top() {
        if ( s.top() < minEle ) return minEle ; 
        else return s.top() ;  
    }
    
    int getMin() {
        return minEle ; 
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