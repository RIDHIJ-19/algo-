#include <bits/stdc++.h>
using namespace std;


void maxsumsubarr(int *arr,int n){
    //csum
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+= arr[i];
        arr[i] = sum;
    }
    int cs = 0;
    int ms = INT_MIN;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int cs = (i == 0) ? arr[j] : arr[j] - arr[i - 1];
            //cout<<arr[j]<<" " <<arr[i-1]<<arr[j]-arr[i-1]<<endl;
            ms = max(ms,cs);
        }

    }
    cout<<ms<<endl;
}

int main(){
    int arr[5]={-1,-2,-3,-4,-5};
    maxsumsubarr(arr,5);
}