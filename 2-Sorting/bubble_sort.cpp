#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i=n-1; i>=1; i--) { 
        int isSorted = 0; //condition for best case time complexity
        for(int j=0; j<=i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                isSorted = 1;
            }
        }
        if(isSorted == 0){
            break; //if the given array is sorted then the loop will break
        }
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    return 0;
}