#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set> // Include set header
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int add = 0;
        vector<vector<int>> out;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == add) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum < add)
                    j++;
                else
                    k--;
            }
        }
        for(auto i : s)
            out.push_back(i);
        return out;
    }
};

int main() {
    // Test your code here if needed
    return 0;
}
