class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //     int n=nums.size();
    //     vector<int>ans;
    //     for(int i=0;i<n;i++){
    //         int product=1;
    //         for(int j=0;j<n;j++){
    //             if(i!=j){
    //                 product*=nums[j];
    //             }   
    //         }
    //         ans.push_back(product);

    //     }
    //     return ans;

        int n=nums.size();
        int product=1;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) count++;
        }
        if(count>1){
            return vector<int>(n,0);
        }
        for(int i=0;i<n;i++){
            product*=nums[i];
        }
        int newprod;
        int prod0=1;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                newprod=product/(nums[i]);
                ans.push_back(newprod);
            }
            else {
                for(int i=0;i<n;i++){
                    if(nums[i]!=0) prod0*=nums[i];
                }
                ans.push_back(prod0);
            }
            
        }
        return ans;
    }
};
