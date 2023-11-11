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

using namespace std;

void ans(vector<int> perm, vector<int> c, int n){
   if (perm.size() == n){
      return;
   }
   else{
      for (int i = 0; i < n ; i++){
         if (c[i]) continue;
         c[i] = true;
         perm.push_back(i);
         ans(perm, c, n);
         c[i] = false;
         perm.pop_back();
      }
   }
   return;
}

int main() {
   cout<<"================";
   return 0;
}