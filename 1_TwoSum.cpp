#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        int tar, n=nums[0];
        for (int i=0; i<nums.size(); i++) {
            tar = target - nums[i];
            if (m.find(tar) == m.end()) {
                m[nums[i]] = i;
            }
            else {
                result.push_back(i);
                result.push_back(m[tar]);
                break;
            }
        }
        return result;
    }
};
