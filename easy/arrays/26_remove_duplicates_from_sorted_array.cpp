// 26. Remove Duplicates from Sorted Array
// Difficulty: Easy
// Pattern: Two Pointers
// Time: O(n)
// Space: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int i = 0;
       int j = 1;
       while(j<n){
        if(nums[j]!=nums[i]){
            i++;
            nums[i]=nums[j];
            
            
        }
        j++;
        
       }
       return i+1;
    }
};
