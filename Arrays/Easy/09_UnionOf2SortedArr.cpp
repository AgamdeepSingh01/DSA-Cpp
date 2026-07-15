// Optimal solution
// Time complexity : O(m+n)
// Space complexity : O(m+n)
#include <iostream>
#include <vector>
using namespace std;

vector<int> Union(int arr1[],int arr2[],int n , int m){
    vector <int> result;
    
    int i = 0 , j = 0;
    while(i < n && j < m){
        // check the condition if element in arr1 is smaller
        if(arr1[i] < arr2[j]){
            // Add only if union(result) is empty or the last element is not similar
            if(result.empty() || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            }
               i++;

        }
        // check the condition if element in arr2 is smaller
        else if(arr1[i] > arr2[j]){
            if(result.empty() || result.back() != arr2[j]){
                result.push_back(arr2[j]);
            }
            j++;
        }
        // condition for same elements , add element once
        else{
            if(result.empty() || result.back() != arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        
    }
    // Remaining elements in arr1
    while(i<n){
        if(result.empty() || result.back() != arr1[i]){
        result.push_back(arr1[i]);
        }
        i++;
    }
    // Remaining elements in arr2
    while(j<m){
        if(result.empty() || result.back() != arr2[j]){
        result.push_back(arr2[j]);
        }
        j++;
    }

    return result;
}
int main(){
    int arr1[] = {1,2,2,3,4,4,5};
    int arr2[] = {2,3,3,4,5,6};

    vector<int> ans = Union(arr1,arr2,7,6);

    for(int op: ans){
        cout << op << " ";
    }

    return 0;
}