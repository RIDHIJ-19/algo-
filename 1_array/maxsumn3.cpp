#include <bits/stdc++.h>
using namespace std;


void maxsumsubarr(int *arr,int n){
    int ms = INT_MIN;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int cs = 0;
            for(int k = i;k<=j;k++){
                cs+=arr[k];
            }
            ms = max(ms,cs);
        }
    }
    cout<<ms<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};
    maxsumsubarr(arr,5);
}