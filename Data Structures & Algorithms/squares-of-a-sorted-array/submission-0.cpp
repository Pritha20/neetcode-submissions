class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        vector<int>res(n);
        int r=nums.size()-1;
        for(int k=n-1;k>=0;k--)
        {
            if(abs(nums[l])<abs(nums[r]))
            {
                res[k]=nums[r]*nums[r--];
            }
            else res[k]=nums[l]*nums[l++];

        }
        return res;

        
    }
};