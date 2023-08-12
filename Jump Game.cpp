class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maximum = 0;
        
        if (nums.size() == 1) return true;
        
        for (int i = 0; i <= maximum; i++) {
            maximum = max(maximum, i + nums[i]);
            
            if (maximum >= nums.size() - 1) return true;
        }
        
        return false;
    }
};

