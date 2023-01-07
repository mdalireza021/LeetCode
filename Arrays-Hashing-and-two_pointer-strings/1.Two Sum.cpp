class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            
            if(mp.find(diff)!=mp.end())
            {
                v.push_back(mp[diff]);
                v.push_back(i);
                
            }
            else
                
            {
                mp[nums[i]]=i;
            }
        }
        
        return v;
    }
};