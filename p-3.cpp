
// milche
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int neg=0;
        for(int i: nums){
            if(i>0){
                pos++;
            }
            else if(i<0){
                neg++;
            }
        }
        int result=max(pos,neg);
        return result;
        
    }
};