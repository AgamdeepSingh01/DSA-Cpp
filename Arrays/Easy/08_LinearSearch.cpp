// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
#include <iostream>
using namespace std;

int LinearSearch(int arr[],int n,int num){
   for (int i = 0; i < n; i++)
   {
    if(arr[i]==num){
        return i;
    }
   }
   return -1;
}

int main(){
    int arr[] = {2,5,1,8,3};
    int n ; 
    cout << "Enter element to search : " ;
    cin >> n;
    int index = LinearSearch(arr,5,n);

    if(index!=-1){
        cout << "Element is present at index " << index << endl ;
    }
    else
        cout << "Element not found" << endl; 
    return 0;
}