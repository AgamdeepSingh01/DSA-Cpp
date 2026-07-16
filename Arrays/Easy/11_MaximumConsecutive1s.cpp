// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leet code question link: https://leetcode.com/problems/max-consecutive-ones
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0 ;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) count++;
            else{
                maxi = max(maxi,count);
                count = 0;
            }
        }
        maxi = max(maxi,count);
        return maxi;
    }

int main(){
    vector <int> nums = {1,0,1,1,0,1,1,1};
    int result  = findMaxConsecutiveOnes(nums);
    cout << "Maximum number of consecutive one's are : " << result ;
    return 0;
}