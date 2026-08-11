class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size()  -1;

        vector<int> ans;

        while(left <= right){
            int numssq = nums[left ] * nums[left];
            int numssw = nums[right] * nums[right];

           if(numssq > numssw){
            ans.push_back(numssq);
            left++;
           }
           else{
            ans.push_back(numssw);
            right--;

        
        }
    }
        reverse(ans.begin(),ans.end());

        return ans;
    }  
};