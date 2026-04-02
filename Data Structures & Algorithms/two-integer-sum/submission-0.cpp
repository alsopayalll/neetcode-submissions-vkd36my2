class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> temp(2);
        if (n<2){
            return temp;
        }

        for(int i =0; i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    temp[0]=i;
                    temp[1]=j;
                    return temp;
                }
            }
        }
        
    }
};
