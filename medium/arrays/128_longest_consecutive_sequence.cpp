// 128. Longest Consecutive Sequence
// Difficulty: Medium
// Pattern: HashSet + Sequence Expansion
// Time: O(n)
// Space: O(n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for( auto ele : s){
            if(s.find(ele-1)==s.end()){
                int count = 1;
                int x = ele;
                while(s.find(x+1)!=s.end()) {
                    x = x + 1;
                    count++;    
                }
                longest = max (longest,count);
            }
        }
        return longest;
    }
};
