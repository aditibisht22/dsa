class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int>ans;

        //process first window
        for(int i = 0 ; i<k ; i++){
            int element = nums[i];
            //if dq m chhote element h remove them because obv they won't be our answer
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();
            }
            //insert to krna hi h sbko bcz they might be answer for next windows
            dq.push_back(i);
        }

        //remaining windows ko process karo k se nums.size()-1 tak ki
        for(int i = k; i<nums.size(); i++){
            //ans store: last answer not stored
            ans.push_back(nums[dq.front()]);

            //removal
            //out of range elements
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }
            //chhote elements pop karo
             int element = nums[i];
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();
            }
            //addition
            dq.push_back(i);
            

        }
        //IMPORTANT
        //last window ka answer store karlo
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};