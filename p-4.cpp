//milche
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int missing=0;
        for(int i=0; i<=n; i++){
            if(n==i){
                missing=n;
                break;
            }
            if(i!=nums[i]){
                missing=i;
                break;
                
            }
        }
        return missing;
        
    }
};