class Solution {
public:

    int pivot(vector<int>& nums){
        int s = 0;
        int e = nums.size() -1 ;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(s==e){
                return s;
            }
            else if(mid-1 >=0 && nums[mid] < nums[mid-1]){
                return mid-1;
            }
            else if(mid+1 < nums.size() && nums[mid]>nums[mid+1]){
                
                return mid;
            }
            else if(nums[s]>nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return -1;
       
    }

int binary(vector<int>& nums, int target, int s,int e){


        while(s<=e){
            int mid = s+(e-s)/2;
             if(nums[mid] == target)
             return mid;
             else if(nums[mid] > target){
             
                e=mid-1;
             }
             else{
                s= mid+1;
             }

        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
       int p= pivot(nums);
       if(target>=nums[0] && target<=nums[p] ){
       return binary(nums,target,0,p);
       }
       else{
       return binary(nums,target,p+1,nums.size()-1);
       }
       
}};