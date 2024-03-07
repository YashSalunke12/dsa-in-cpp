#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j) {
        while(arr[i]<=arr[pivot] && i <= high) {
            i++;
        }
        while(arr[j]>arr[pivot] && j >= low) {
            j--;
        }
        if(i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pivotIndex = findPivotIndex(arr, low, high);
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    }
}

int main(){
    vector<int> arr = {4,6,2,5,7,9,1,3};
    int low = 0;
    int high = arr.size()-1;
    quickSort(arr, low, high);
    for(int i=0; i<=high; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}