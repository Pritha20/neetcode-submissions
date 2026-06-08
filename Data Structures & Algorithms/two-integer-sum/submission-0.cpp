class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int first=0;int second=0;
        for(int i=0;i<nums.size();i++)
        {
            first=nums[i];
            second=target-first;
            if (mp.find(second)!=mp.end())
            {
                ans.push_back(mp[second]);
                mp[first]=i;
                ans.push_back(mp[first]);
            }
            else
            {
                mp[first]=i;
                
            }
        }
        return ans;
        
    }
};
