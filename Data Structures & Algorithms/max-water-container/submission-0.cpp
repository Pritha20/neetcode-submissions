class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int maxarea = 0;
        while(i<j)
        {
            int area = (min(nums[i],nums[j])) * (j-i);
            maxarea = max(maxarea,area);

            if(nums[i]<=nums[j])
            {
                i++;
            }
            else {
                j--;
            }

        }
        return maxarea;
        
    }
};
