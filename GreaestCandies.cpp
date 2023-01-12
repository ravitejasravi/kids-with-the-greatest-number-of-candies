class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> result;
        int j;
        
        for(int i = 0; i < candies.size(); i++) {

            int temp = candies[i] + extraCandies;

            for(j = 0; j < candies.size(); j++) {
                if(temp < candies[j]) {
                    result.push_back(false);
                    break;
                }
            }

            if(j == candies.size())
                result.push_back(true);

        }

        return result;
    }
};