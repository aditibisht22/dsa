
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s =0;
        int e =nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            //single element: ans is the element
            if(s==e) return nums[s];
            //if position is odd
            else if(mid & 1){
                if(mid-1 >= 0 && nums[mid-1] == nums[mid]) s= mid+1;
                else e= mid-1;
            }
            else{
                if(mid+1 < nums.size() && nums[mid] == nums[mid+1]) s = mid+2;
                else e = mid;
            }
        }
        return -1;
    }
};