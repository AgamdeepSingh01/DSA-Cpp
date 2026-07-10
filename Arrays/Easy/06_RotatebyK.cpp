// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
// Leet code question for Right Rotate Array : https://leetcode.com/problems/rotate-array
#include <iostream>
using namespace std;

void reverse(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void rotate(int arr[],int n,int k,string direction){
    k = k%n;
    if(direction == "right"){
        // Reverse entire array
        reverse(arr,0,n-1);
        // reverse first k elements
        reverse(arr,0,k-1);
        // reverse rest elements after k
        reverse(arr,k,n-1);
    }
    else if(direction == "left" ){
        // For left rotation
        // reverse k elements
        reverse(arr,0,k-1);
        // reverse elements after k
        reverse(arr,k,n-1);
        // reverse array
        reverse(arr,0,n-1);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    rotate(arr,5,3,"right");
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}