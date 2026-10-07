class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size()>1){
            auto first = pq.top();pq.pop();
            auto second = pq.top(); pq.pop();
            if(abs(first-second)!=0)pq.push(abs(first-second));
        }
        return pq.empty() ?  0 : pq.top();
    }
};