class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < numbers.size(); i++) {
            if (m.count(target - numbers[i])) {
                res.push_back(m[target - numbers[i]]);
                res.push_back(i + 1); 
                break;
            }   
            m[numbers[i]] = i + 1;
        }   
        return res;
    }   
};
