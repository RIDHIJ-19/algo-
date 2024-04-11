#include <bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a>b;
}

int main(){
    int arr[] = {5,4,9,23,90,3,2,1};
    int n = sizeof(arr)/sizeof(int);
     sort(arr,arr+n,compare);
    for(int x: arr){
        cout<<x<<" ";
    }
}