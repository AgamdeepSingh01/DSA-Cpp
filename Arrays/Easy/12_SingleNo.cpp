// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leetcode question link: https://leetcode.com/problems/single-number
#include <iostream>
#include <vector>
using namespace std;

int findsingle(vector<int> &arr){
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    { // xor all elements of array and only unique element will remain
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    vector <int> arr = {3, 2, 4, 4, 3};
    int result  = findsingle(arr);
    cout << "Single number is : " << result ;
    return 0;
}