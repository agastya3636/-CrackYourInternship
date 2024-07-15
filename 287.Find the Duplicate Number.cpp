class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>n(nums.size()+1);
        for(auto i:nums){
            n[i]++;
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>1)
            return i;
        }
        return -1;
    }
};