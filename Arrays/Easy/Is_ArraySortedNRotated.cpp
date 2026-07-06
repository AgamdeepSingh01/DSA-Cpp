// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leet code question link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated
#include <iostream>
using namespace std;

bool check(int arr[],int n){
    // For leetcode only this fxn is answer
    int count = 0;
    for (int i = 1; i < n; i++){

        if(arr[i-1] > arr[i]) count++ ;
    }

    if(arr[n-1] > arr[0]) count++ ;

    return count<=1 ;
    
}

int main(){
    // Example 1
    int arr1[] = {3,4,5,1,2};
    bool ans = check(arr1,5);
    if(ans == true)
    cout << "Array is sorted" << endl ;
    else
    cout << "Not sorted" << endl;

    // Example 2
    int arr2[] = {2,1,3,4};
    ans = check(arr2,4);
    if(ans == true)
    cout << "Array is sorted" << endl;
    else
    cout << "Not sorted" << endl;
    return 0;
}