#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// Hint: Trie

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string result = "";
        string s1 = strs.front();
        string s2 = strs.back();
        for (int i=0; i<s1.length(); i++) {
            if (s1[i] == s2[i]) {
                result += s1[i];
            }
            else {
                break;
            }
        }
        return result;
    }
};

int main() {
    vector<string> input = {"flower","flow","flight"};
    Solution s;
    string result = s.longestCommonPrefix(input);
    cout << result;
}