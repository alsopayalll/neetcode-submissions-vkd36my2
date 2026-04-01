class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if(nums[i]==nums[j]){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};