class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(count.find(nums[i])!=count.end()) return true;
            else count[nums[i]]=1;
        }
        return false;

        
    }
};