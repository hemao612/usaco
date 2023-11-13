/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
 

Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;

        _getPermutations(result, nums, 0, nums.size() - 1);
        return result;
    }

    void _getPermutations(vector<vector<int>>& result, vector<int> nums, int l, int r){
        if(l == r){
            result.push_back(nums);
            return;
        } else {
            for(int i = l; i <= r; i++){
                swap(nums[l], nums[i]);

                _getPermutations(result, nums, l + 1, r);

                swap(nums[l], nums[i]);
            }
        }
    }
};