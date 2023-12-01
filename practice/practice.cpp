#include <iostream>

using namespace std;

// 遍历数组nums, 从下标0开始, 到下标n-1结束，打印每个元素
void print(int *nums, int n)
{
}

// 交换数组nums中下标为i和j的元素
void swap(int *nums, int i, int j)
{
}

// 遍历数组nums, 从下标i开始, 到下标j结束，找出最大的元素并返回
int findMax(int *nums, int i, int j)
{
    int max = nums[i];
    return max;
}

// 遍历数组nums, 从下标i开始, 到下标j结束，如果下一个元素比当前元素小，则交换两个元素
void bubble(int *nums, int i, int j)
{
}

// 循环调用bubble函数n次，每次从下标0开始，到下标n-i结束
void bubbleSort(int *nums, int n)
{
}

// 将两个有序数组nums1和nums2合并成一个有序数组, 并将结果存储在nums1中
void merge(int *nums1, int n1, int *nums2, int n2)
{
    int *nums = new int[n1 + n2];
    delete[] nums;
}

// 将数组nums平均分为两组，分别排序，然后将两组合并
void mergeSort(int* nums, int n) {
}

// 返回字符串s中'a‘的个数
int countA(string s)
{
    int count = 0;
    return count;
}
// 返回字符串中"aaa"的个数
int countAAA(string s)
{
    int count = 0;
    return count;
}

// 返回字符串s和字符串t的最长公共前缀
string commonPrefix(string s, string t)
{
    string prefix = "";
    return prefix;
}

// 判断字符串s是否包含指定的字符串t
bool contains(string s, string t)
{
    return false;
}

// 判断字符串s是否为回文字符串
// 回文字符串：如果字符串的反序与原始字符串相同，则该字符串称为回文字符串
bool isPalindrome(string s)
{
    return true;
}

// 找出字符串s中最长的回文字符串
// https://leetcode.com/problems/longest-palindromic-substring/
string longestPalindrome(string s)
{
    string longestString = "";
    return longestString;
}

int main()
{
    int nums[10] = {8, 5, 3, 2, 4, 6, 7, 9, 1, 0};
    int nums1[10] = {1, 3, 5, 7, 9, 0, 0, 0 ,0 ,0};
    int nums2[5] = {2, 4, 6, 8, 10};
    string s1 = "aptbsderwoer";
    string s2 = "tarlrat";
    string s3 = "abbba";
    string s4 = "aaabbbaabbbaaa";
    string s5 = "babad";

    // swap(nums, 0, 4);
    // print(nums, 10);
    // bubbleSort(nums, 10);
    // print(nums, 10);
    // merge(nums1, 5, nums2, 5);
    // print(nums1, 10);
    // mergeSort(nums, 10);
    // print(nums, 10);
    // cout << findMax(nums, 0, 10) << endl;
    // cout << longestPalindrome(s5) << endl;
    return 0;
}