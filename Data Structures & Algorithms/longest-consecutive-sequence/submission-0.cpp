class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=true;
        }
        
        for(int i=0;i<n;i++)
        {
            int streak=0;
            int curr=nums[i];
            while (mp.find(curr)!=mp.end())
            {
                streak++;
                curr++;
            }
            res=max(res,streak);
        }
        return res;

        
        
    }
};
