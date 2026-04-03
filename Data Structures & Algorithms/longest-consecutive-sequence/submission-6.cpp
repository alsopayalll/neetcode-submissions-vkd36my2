class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> arr(nums.begin(),nums.end());
        int longest=0;
        for(int i:arr){
            if(arr.find(i-1)==arr.end()){
                int current = i;
                int count=1;
                while(arr.find(current+1)!=arr.end()){
                    current++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
