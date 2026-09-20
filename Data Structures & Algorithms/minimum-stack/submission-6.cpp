class MinStack {
public:
    stack <int> s;
        stack <int> mini;
        int m=9999;
        int &min=m;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            mini.push(val);
            min=val;
        }
        else{
            if(val<=min) {
                mini.push(val);
                min=val;
            }
            s.push(val);
        }
    }
    
    void pop() {
        if(s.empty()) return;
        if(s.top()==mini.top()){
            mini.pop();
            s.pop();
            if(s.empty()) min=9999;
            else min=mini.top();
        }
        else{
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};
