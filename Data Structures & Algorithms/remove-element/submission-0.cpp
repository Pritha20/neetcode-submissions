class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int index=0;
        for(int i=0;i<nums.size();i++)
        {
            if(val!=nums[i])
            {
                nums[index]=nums[i];
                k++;
                index++;
            }
            else continue;
        }
        return k;
        
        
    }
};