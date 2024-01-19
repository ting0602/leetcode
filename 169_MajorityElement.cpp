#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Hint: unordered_map: O(1) v.s. map: O(logN)
        unordered_map<int, int> record;
        int target = nums.size() / 2 + 1;
        int ans = 0;
        for (auto num:nums) {
            record[num]++;

            if (record[num] >= target) {
                ans = num;
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution s;
    int result = s.majorityElement(nums); // Calls your implementation

    cout << "result = "<< result << endl;
}