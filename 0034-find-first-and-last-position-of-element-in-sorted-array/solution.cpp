class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> v1={-1,-1};
    int lo=0,hi=nums.size()-1;
    while (lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target ) {
            if(mid == 0 || nums[mid-1]!=target){
                v1[0]=mid;
                break;
            }
            else hi=mid-1;
        }
        else if (nums[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    lo=0,hi=nums.size()-1;
    while (lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target ) {
            if(mid==nums.size()-1 || nums[mid+1]!=target){
                v1[1]=mid;
                break;
            }
            else lo=mid+1;
        }
        else if (nums[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return v1;
    }
};
