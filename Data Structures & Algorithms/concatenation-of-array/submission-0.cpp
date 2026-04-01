class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        int n=2*len;
        vector<int> ans(n);
        for(int i=0;i<len;i++){
            ans[i]=nums[i];
            ans[n-i-1]=nums[len-i-1];
        }
        return ans;
        
    }
    
};