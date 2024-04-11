#include <bits/stdc++.h>
using namespace std;

void  insertionsort(int *arr,int n){
    for(int i = 1;i<n;i++){
        int e = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>e){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = e;                 
    }
}
 
int main(){
    int arr[5] = {5,4,3,2,1};
    insertionsort(arr,5);
    for(int x: arr){
        cout<<x<<" ";
    }
}