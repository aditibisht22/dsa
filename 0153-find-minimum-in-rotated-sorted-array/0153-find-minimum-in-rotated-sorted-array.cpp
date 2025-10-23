class Solution {
public:

    int pivot(vector<int> &nums){
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(s==e) return s;
            //handle separately
            else if(mid-1 >= 0 && nums[mid] < nums[mid-1]) return mid-1;
            else if(mid+1 <= n-1 && nums[mid+1] < nums[mid]) return mid;
            else if(nums[s] > nums[mid]) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        int p = (pivot(nums)+1) % nums.size();
       
          return nums[p];
    }
  
};