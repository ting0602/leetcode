#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, x = 0, y = 1;
        while (y != nums.size()) {
            if (nums[x] != nums[y]) {
                k++;
                nums[++x] = nums[y];
            }
            y++;
        }
        return k;
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // Input array
    int expectedNums[5] = {0,1,2,3,4}; // The expected answer with correct length
    Solution s;
    int k = s.removeDuplicates(nums); // Calls your implementation

    cout << "k = "<< k << endl;
    for (int i = 0; i < k; i++) {
        bool ans = nums[i] == expectedNums[i];
        cout << ans << " ";
    }
}