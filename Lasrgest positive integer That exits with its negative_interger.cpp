class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<int>pq;
        for(int i:nums){
            pq.push(i);
        }
        while(!pq.empty()){
            int num=pq.top();
            pq.pop();
            // cheking the result
            num=-num;
            if(mp.find(num)!=mp.end()) return -(num);
        }
        return -1;
    }
};
