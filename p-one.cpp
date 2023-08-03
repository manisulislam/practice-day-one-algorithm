// kicho boji ni

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negativeNumbers=0;
        for(int i: grid){
            if(i<0){
                negativeNumbers++;
            }
        }
        return negativeNumbers;
    }
};