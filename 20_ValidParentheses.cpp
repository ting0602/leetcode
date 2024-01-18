#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        bool ans = true;
        if(s.length() % 2 == 1) {
            return false;
        }
        for (int i=0; i<s.length(); i++) {
            char x = s[i];
            if (x == '{' || x == '[' || x == '(') {
                store.push(x);
            }   
            else {
                char c = store.top();
                if (store.empty()) {
                    ans = false;
                    break;
                }
                else if (c == '{' && x == '}') {
                    store.pop();
                }                
                else if (c == '[' && x == ']') {
                    store.pop();
                }                
                else if (c == '(' && x == ')') {
                    store.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
        }
        if (!store.empty()) {
            ans = false;
        }
        return ans;
    }
};