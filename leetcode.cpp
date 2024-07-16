//Leetcode problem 1 

//problem statement :-  Two Sum 

//Source code :- 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int m= nums.size();
        int i= 0;
        int j= i+1;
        for(i= 0; i<m; i++){
            for(j=i+1; j<m; j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
