#include<iostream>
using namespace std;

//brute-force-approach
//TC: O(q*n)
//SC: O(n)
int cntNum(int number, int arr[], int n) {
    int counter = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]==number) {
            counter++;
        }
    }
    return counter;
}

//optimized-approach
//TC: 
//SC:
int hashing(int number, int arr[], int n) {
    //precomputing
    int hash[13] = {0};
    for(int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }
    

    //fetching
    return hash[number];
}

int main() {

//input-arry
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

//test-cases
    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<hashing(number, arr, n)<<endl;
        // cout<<cntNum(number, arr, n)<<endl;
    }
    return 0;
}