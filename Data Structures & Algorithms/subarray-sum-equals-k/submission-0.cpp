class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>psum(n,0);
        psum[0]=nums[0];
        for(int i=1;i<n;i++){
            psum[i] = psum[i-1]+nums[i];
        }
        int count=0;
        unordered_map<int,int>mp;
        for(int j=0;j<n;j++){
            if(psum[j]==k) count++;
            int val=psum[j]-k;
            if(mp.find(val)!=mp.end()) count= count + mp[val];
            if(mp.find(psum[j])==mp.end()){
                mp[psum[j]]=0;
            }
            mp[psum[j]]++;
        }
        return count;
    }
};