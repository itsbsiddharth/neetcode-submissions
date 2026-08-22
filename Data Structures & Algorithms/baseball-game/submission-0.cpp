class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        for (const string& op : operations) {
            if (op == "+") {
                st.push_back(st.back() + st[st.size() - 2]);
            } else if (op == "D") {
                st.push_back(st.back() * 2);
            } else if (op == "C") {
                st.pop_back();
            } else {
                st.push_back(stoi(op));
            }
        }
        
        int sum = 0;
        for (int score : st) {
            sum += score;
        }
        return sum;
    }
};