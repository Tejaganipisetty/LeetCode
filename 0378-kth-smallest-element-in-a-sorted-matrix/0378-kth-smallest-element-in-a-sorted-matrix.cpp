class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(auto rows:matrix)
        {
            for(int n:rows)
            {
                pq.push(n);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};