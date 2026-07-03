#include <iostream>
using namespace std;

int findmax(int arr[],int n){
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }
    }
   return max; 
}

int main(){
    int arr[] = {2, 5, 1, 3, 0};
    int largest  = findmax(arr,5);
    cout << "Largest element is : " << largest ;
    return 0;
}