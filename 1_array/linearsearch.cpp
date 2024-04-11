#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int*arr,int n,int k){
    for(int i = 0;i<n;i++){
        if(arr[i] == k){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {2,3,42,2,1,35,4,2,65,30};
    cout<<linearsearch(arr,10,65);
}