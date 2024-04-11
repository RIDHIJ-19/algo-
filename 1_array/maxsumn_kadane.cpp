#include <bits/stdc++.h>
using namespace std;


void maxsumsubarr(int *arr,int n){
     //negative
    int cs = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i]>=0){
            cs = INT_MAX;
            break;
        }
        else{
            cs = max(cs,arr[i]);
        }       
         
    }
    if(cs!= INT_MAX){
        cout<<cs<<endl;
        return;
    }
    
    
    cs = 0;
    int ms = 0;
    for(int i = 0;i<n;i++){
        cs += arr[i];
        cs = (cs<0)?0:cs;
        ms = max(ms,cs);

    }
    cout<<ms<<endl;
}

int main(){
    int arr[5]={-1,-2,-3,-4,-5};
    maxsumsubarr(arr,5);
}