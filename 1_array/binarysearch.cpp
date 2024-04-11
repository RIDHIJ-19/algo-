#include <bits/stdc++.h>
using namespace std;

int binarysearch(int*arr,int n,int k){
     //sort(arr,arr+n);
     int s = 0,e = n-1;
     while(s<=e){
        int m = (s+e)/2;
        if(arr[m]==k){
            return m;
        }else if(arr[m]<k){
            s = m+1;
        }else{
            e = m-1;
        }
     }
     return -1;
}
int main(){
    int arr[10] = { 1,2,3,4,7,8,16,65,78,99};
    cout<<binarysearch(arr,10,65);
}