class BrowserHistory {
private:
vector<string>history;
int current_pos;

public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        current_pos=0;
    }
    
    void visit(string url) {
        history.resize(current_pos+1);
        history.push_back(url);
        current_pos++;
    }
    
    string back(int steps) {
        current_pos=max(0,current_pos-steps);
        return history[current_pos];
    }
    
    string forward(int steps) {
        int n=history.size();
        current_pos=min(n-1,current_pos+steps);
        return history[current_pos];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */