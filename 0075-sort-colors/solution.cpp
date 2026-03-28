class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, hi=nums.size()-1;
        while(mid<=hi){
        if(nums[mid]==2){
            nums[hi]=nums[hi]+nums[mid]-(nums[mid]=nums[hi]);
            hi--;
        }
        else if (nums[mid]==0){
            nums[low]=nums[low]+nums[mid]-(nums[mid]=nums[low]);
            low++;
            mid++;
        }
        else mid++;
        }
    }
};
