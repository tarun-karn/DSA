//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i = 0;
     int j = i+1;
     int k = 1;
     int count = 1;
     int n = nums.size();
     while (j < n){
        if (nums[i] == nums[j]){
            i++;
            j++;
        }
        else if (nums[i] != nums[j]){
            nums[k] = nums[j];
            k++;
            count++;
            i++;
            j++;
        }
     }
     return count;   
    }
};