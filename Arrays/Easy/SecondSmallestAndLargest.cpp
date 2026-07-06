// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
#include <iostream>
using namespace std;

int Second_small(int arr[],int n){
    if(n < 2){
        return -1;
    }
    int small = INT_MAX;
    int secondSmall = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if(arr[i] < secondSmall && arr[i]!=small){
             secondSmall = arr[i];  
        }
    }
    return secondSmall;
}

int Second_large(int arr[],int n){
    if(n < 2){
        return -1;
    }
    int large = INT_MIN;
    int secondLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if(arr[i] > secondLarge && arr[i]!=large){
             secondLarge = arr[i];  
        }
    }
    return secondLarge;
}
int main(){
    int arr[] = {1, 2, 4, 7, 7, 5};
    int second_largest  = Second_large(arr,6);
    int second_smallest  = Second_small(arr,6);
    cout << "Second Largest element is : " << second_largest << endl ;
    cout << "Second Smallest element is : " << second_smallest ;
    return 0;
}