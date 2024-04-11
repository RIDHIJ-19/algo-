#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[10] = {2,3,42,2,1,35,4,2,65,30};
    int maxn = INT_MIN;
    int minn = INT_MAX;
    for(int i = 0;i<10;i++){
        maxn = max(maxn,arr[i]);
        minn = min(minn,arr[i]);
    }
    cout<<"max no is "<<maxn<<endl;
    cout<<"min no is "<<minn<<endl;
}