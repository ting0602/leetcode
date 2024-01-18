#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num1Values(nums1.begin(), nums1.begin() + m);
        vector<int>::iterator num1Iterator;
        vector<int>::iterator num2Iterator;
        num1Iterator = num1Values.begin();
        num2Iterator = nums2.begin();
        vector<int> result;

        for (int i = 0; i < m+n; i++) {
            if (num1Iterator != num1Values.end() && num2Iterator != nums2.end()) {
                if (*num1Iterator <= *num2Iterator) {
                    result.push_back(*num1Iterator);
                    num1Iterator++;
                }
                else {
                    result.push_back(*num2Iterator);
                    num2Iterator++;
                }
            }

            else if (num1Iterator == num1Values.end()) {
                result.insert(result.end(), num2Iterator, nums2.end());
                break;
            }
            else {
                result.insert(result.end(), num1Iterator, num1Values.end());
                break;
            }
        }
        nums1 = result;

    }
};