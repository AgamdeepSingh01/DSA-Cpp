// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leet code question : https://leetcode.com/problems/move-zeroes
#include <iostream>
using namespace std;

void move(int arr[],int n ){
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if(arr[j] !=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main(){
    int arr[] = {1,0,2,0,0,3,0,4};
    move(arr,8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}