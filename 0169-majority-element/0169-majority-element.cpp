class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int ans = 0;
        
        int n = nums.size();
//         for(int i = 0; i<nums.size(); i++){
//             int count = 1;
//             for(int j = i+1; j<nums.size(); j++){
// if(nums[i] == nums[j])
// count++;
//             }
//             if(count > n/2){
//                 return nums[i];
//             }

//         }
//         return -1;

    //Moore's algo

    int count = 0;
    int num;
    for(int i =0; i<n; i++){
        if(count == 0){
            num = nums[i];
            count = 1;
        }
        else if(nums[i] == num){
            count++;
        }
        else{
            count--;
        }

    }
    return num;

    }
};