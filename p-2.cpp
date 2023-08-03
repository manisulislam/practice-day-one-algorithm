// milse


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>anis;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                anis.push_back(i);
            }
        }

        if(anis.empty()){
            return anis;
        }
        return anis;
    }
};


