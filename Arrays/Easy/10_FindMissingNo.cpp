// Optimal solution
// Time complexity : O(n)
// Space complexity : O(1)
#include <iostream>
#include <vector>
using namespace std;

int findmissing(vector<int> &arr){
    int n = arr.size() + 1;
    int ans = 0;
    for(int i = 1 ; i <= n; i++){
        ans = ans ^ i;
    }
    for(int i = 0 ; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    vector <int> arr = {3, 1, 4, 2, 6};
    int result  = findmissing(arr);
    cout << "Missing number is : " << result ;
    return 0;
}