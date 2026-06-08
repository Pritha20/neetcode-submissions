class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
           maxi=INT_MIN;
           for(int j=i+1 ; j<n;j++)
           {
            maxi=max(maxi,arr[j]);
           }
           arr[i]=maxi;
        }
        arr[n-1]=-1;
        return arr;


        
    }
};