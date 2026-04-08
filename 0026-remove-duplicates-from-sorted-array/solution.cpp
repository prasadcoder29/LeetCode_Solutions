class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,l=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]>nums[l]){
                swap(nums[i],nums[l+1]);
                l++;
                k++;
            }
        }
        return k;
    }
};
