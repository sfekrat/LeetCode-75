class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCan = 0;

        for(auto& candie : candies) {
            maxCan = max(maxCan, candie);
        }
        for(auto& candie : candies) {
            result.push_back(candie + extraCandies >= maxCan);
        }
        return result;
    }
};
