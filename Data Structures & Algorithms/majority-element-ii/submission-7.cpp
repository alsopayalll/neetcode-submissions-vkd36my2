class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        vector<int> ans;
        int i=0;
        while(i<n){
            int j=i+1;
            while(nums[i]==nums[j]&&j<n){
                j++;
            }
            if(j-i> n/3){
                ans.push_back(nums[i]);
            }
            i=j;
        }
        return ans;
        
    }
        
        
    
};