class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int longest=0;
        int length=0;
        for(int num : mp)
        {
            if(mp.find(num-1)==mp.end())
            {
                length=1;
                while(mp.find(num+length)!=mp.end())
                {
                    length++;
                }
            }
            longest=max(longest,length);
        }
        return longest;
        
        
        
        
        

        
        
    }
};
