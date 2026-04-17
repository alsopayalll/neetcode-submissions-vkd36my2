class Solution {
public:
//quick sort coz better than merge sort
    // void quicksort(vector<int>&nums,int low,int high){
    //     if(low>=high)return;
    //     int pivot=nums[low];
    //     int p= low+1;
    //     int q= high;
    //     while(p<q){
    //         while(nums[p]<=pivot && p<high) p++;
    //         while(nums[q]>=pivot && q>low) q--;
    //         if(p<q) swap(nums[q],nums[p]);
    //     }
    //     swap(nums[q],nums[low]);
        
    //     quicksort(nums,low,q);
    //     quicksort(nums,q+1,high);

    // }
    // void sortColors(vector<int>& nums) {
    //     int high=nums.size();
    //     quicksort(nums,0,high-1);
    // }
    //quick sort didnt work 
    //use dutch flag =3 pointer approach 
    void sortColors(vector<int>& nums) {
        int low=0, mid=0,high=nums.size()-1;
        while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++; mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        } 
        }
    }
};