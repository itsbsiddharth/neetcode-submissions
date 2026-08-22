class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int n=s.size();
        priority_queue<int>maxheap;
        for(int i=0;i<n;i++){maxheap.push(s[i]);}

        while(maxheap.size()>1){
            int x= maxheap.top();maxheap.pop();
            int y= maxheap.top();maxheap.pop();
            if(x>y){maxheap.push(x-y);}
        }
        if(maxheap.size()==0) return 0;
        return maxheap.top();
    }
};
