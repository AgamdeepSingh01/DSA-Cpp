// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leet code question link : https://leetcode.com/problems/remove-duplicates-from-sorted-array
#include <iostream>
using namespace std;

int removeDupli(int arr[],int n){
    int i = 0;
    for (int j = 1; j < n; j++)
    {
       if(arr[j]!=arr[i])
        i++;

       arr[i] = arr[j]; 
    }
    // Returning count of unique elements
    return i+1;
}

int main(){
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int count  = removeDupli(arr,10);
    cout << "No. of Unique elements are : " << count << endl ;
    // To display unique array
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";

    }
    
    return 0;
}