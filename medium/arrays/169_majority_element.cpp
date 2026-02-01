// 169. Majority Element
// Difficulty: Easy
// Pattern: Moore's Voting Algorithm
// Time: O(n)
// Space: O(1)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = 0, ans = 0;
        for(int i=0;i<n;i++){
            if(freq==0) ans=nums[i];
            if(ans==nums[i]) freq++;
            else freq--;
        }
        return ans;
    }
};
