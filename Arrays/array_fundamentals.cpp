// 1. Linear Search

// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1


// Example 1

// Input: nums = [2, 3, 4, 5, 3], target = 3

// Output: 1

// Explanation:

// The first occurence of 3 in nums is at index 1



// class Solution {
// public:
//     int linearSearch(vector<int>& nums, int target) {
//         //your code goes here
//         for(int i = 0; i<= nums.size(); i++){
//             if(nums[i] == target) return i;
//         }
//         return -1;
//     }
// };














// 2. Largest Element

// Given an array of integers nums, return the value of the largest element in the array


// Example 1

// Input: nums = [3, 3, 6, 1]

// Output: 6

// Explanation: The largest element in array is 6



// class Solution {
// public:
//     int largestElement(vector<int>& nums) {
//         int larg = nums[0];
//         for(int i = 1; i<nums.size(); i++){
//             if(nums[i] > larg) larg = nums[i];
//         }
//         return larg;
//     }
// };
















// 3. Second Largest Element

// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.


// Example 1

// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation:

// The largest value in nums is 8, the second largest is 7



// code:-

// class Solution {
// public:
//     int secondLargestElement(vector<int>& nums) {
//         //your code goes here

//         int larg = nums[0];
//         int seclarg = INT_MIN;
//         int flag = 0;
//         for(int i = 1; i<nums.size(); i++){
//             if(nums[i] > larg){
//                 seclarg =  larg;
//                 larg = nums[i];
//                 flag = 1;
//             }
//             else if(nums[i] > seclarg && nums[i] != larg) {
//                 seclarg = nums[i];
//                 flag = 1;
//             }
//         }

//         if(flag ==0) return -1;
//         else return seclarg;

//     }
// };













// 4. Maximum Consecutive Ones

// Given a binary array nums, return the maximum number of consecutive 1s in the array.

// A binary array is an array that contains only 0s and 1s.

// Example 1

// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]

// Output: 3

// Explanation:

// The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s


// code:-

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0 , maxi = 0;
//         for(int i = 0; i< nums.size(); i++){
//             if(nums[i]==1){
//                 count++;
//                 maxi = max(maxi, count);
//             }
//             else{
//                 count = 0;
//             }
//         }
//         return maxi;
//     }
// };











// 5. Left Rotate Array by One

// Given an integer array nums, rotate the array to the left by one.

// Note: There is no need to return anything, just modify the given array.

// Example 1

// Input: nums = [1, 2, 3, 4, 5]

// Output: [2, 3, 4, 5, 1]

// Explanation:

// Initially, nums = [1, 2, 3, 4, 5]

// Rotating once to left -> nums = [2, 3, 4, 5, 1]



// code:-

// class Solution {
// public:
//     void rotateArrayByOne(vector<int>& nums) {
//         int temp = nums[0];
//         int n = nums.size();
//         for(int i = 0; i< n-1; i++){
//             nums[i] = nums[i+1]; 
//         }
//         nums[n-1] = temp;
//     }
// };











//6.  Left Rotate Array by K Places

// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

// Example 1

// Input: nums = [1, 2, 3, 4, 5, 6], k = 2

// Output: nums = [3, 4, 5, 6, 1, 2]

// Explanation:

// rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]


// code :-

// class Solution {
// public:
//     void rotateArray(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k%n;
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k , nums.end());
//         reverse(nums.begin(), nums.end());
//     }
// };













//7.  Move Zeros to End

// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

// This must be done in place, without making a copy of the array.

// Example 1

// Input: nums = [0, 1, 4, 0, 5, 2]

// Output: [1, 4, 5, 2, 0, 0]

// Explanation:

// Both the zeroes are moved to the end and the order of the other elements stay the same


// code:-

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;
//         for(int i = 0; i<nums.size() ;i++){
//             if(nums[i] != 0){
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };