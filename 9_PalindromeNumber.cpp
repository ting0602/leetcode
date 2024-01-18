#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int get_len(int);
ll pow(ll, ll);

class Solution {
public:
    bool isPalindrome(int x) {
        int num, idx, j, mid;
        ll p;
        if (x < 0) {
            return 0;
        }
        idx = get_len(x);
        if (idx == 1) {
            return 1;
        }
        vector<int> vec(idx+1, 0);
        int index = 0;
        for (int i = idx-1; i>=0; i--) {
            p = pow(10,i);
            num = x / p;
            vec[index] = num;
            x -= (num * p);
            index++;
        }
        j = idx - 1;
        mid = idx / 2;
        for (int i=0; i<=mid && j>=0; i++) {
            if (vec[i] != vec[j]) {
                return 0;
            }
            j--;
        }

        return 1;
    }
};

int get_len(int n){
    int ans = 0;
    while(n != 0){
        n /= 10;
        ans++;
    }
    return ans;
}
ll pow(ll x, ll p)
{
    ll r=1;
    for(;p;p>>=1) {
        if(p&1){
            r*=x;
        }
        x*=x;
    }
    return r;
}