class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int n:arr)
        {
            pq.push({abs(n-x),n});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0)
        {
           ans.push_back(pq.top().second);
           pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};