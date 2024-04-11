#include <bits/stdc++.h>
using namespace std;

void selectionsort(int *arr,int n){
    for(int i = 0;i<n;i++){
        int min = arr[i];
        int k = 0;
        for(int j = i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                k = j;
            }
        }
        if(min!= arr[i]){
             swap(arr[i],arr[k]);
        }   
    }
}
 
int main(){
    int arr[10] = {2,3,42,2,1,35,4,2,65,30};
    selectionsort(arr,10);
    for(int x: arr){
        cout<<x<<" ";
    }
}