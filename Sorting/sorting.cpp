// SORTING  

// Given an array of integers called nums,sort the array in 
// non-decreasing order using the bubble sort algorithm and return
//  the sorted array.

// A sorted array in non-decreasing order is an array where 
// each element is greater than or equal to all preceding elements 
// in the array.



// Selection sort

// select min elem and swap

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selection_sort(n, arr);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}














// Bubble Sort


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        int didswap = 0;
        for(int i = n-1; i>=1; i--){
            for(int j=0; j< i; j++){
                if(nums[j] >nums[j+1]) {
                    swap(nums[j],nums[j+1]);
                    didswap = 1;
                }
            }
            if(didswap ==0) return nums;
        }
        return nums;
    }
};














// Insertion Sorting

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i< n; i++){
            int j = i;
            while(j>0 && nums[j] < nums[j-1] ){
                swap(nums[j],nums[j-1]);
                j--;
            }
        }
        return nums;
    }
};












// Merge Sorting

class Solution {
public:

    void merge(vector<int> &nums, int low, int mid, int high){
        vector<int> temp;
        int left = low , right = mid+1;
        while(left <= mid && right <= high){
            if(nums[left] <= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i= low; i<= high; i++){
            nums[i] = temp[i-low];
        }
    }

    void divide(vector<int> &nums, int low , int high){
        if(low == high) return;
        int mid = low+ (high-low)/2;
        divide(nums,low,mid);
        divide(nums,mid+1,high);
        merge(nums,low,mid,high);
    }

    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        divide(nums,0,n-1);
        return nums;
    }
};














// Quick Sorting

class Solution {
public:

    int partition(vector<int> & nums, int low , int high){
        int pivot = low, i = low , j = high;

        while(i<j){
            while(nums[i]<= nums[pivot] && i<= high-1) i++;
            while(nums[j]> nums[pivot] && j>= low+1) j--;
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[pivot], nums[j]);
        return j;
    }

    void qs(vector<int> &nums, int low , int high){
        if(low<high){
            int pindex = partition(nums, low , high);
            qs(nums , low , pindex-1);
            qs(nums , pindex+1, high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0 , nums.size()-1);
        return nums;
    }
};

