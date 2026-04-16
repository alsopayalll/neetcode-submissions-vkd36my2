class Solution {
public:
    vector<int>merge(vector<int>&nums,int low,int mid,int high){
        int i=low;int j=mid+1;
        vector<int>arr;
        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                arr.push_back(nums[i]);
                i++;
            }
            else{
                arr.push_back(nums[j]);
                j++;
            }

        }
        while(i<=mid){
            arr.push_back(nums[i]);
            i++;
        }
        while(j<=high){
            arr.push_back(nums[j]);
            j++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=arr[i-low];
        }
        return nums;
    }
    void mergesort(vector<int>&nums, int low,int high){
        if(low==high) return;
        int mid= low+(high-low)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};