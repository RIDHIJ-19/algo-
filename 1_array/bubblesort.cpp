#include <bits/stdc++.h>
using namespace std;

void  bubblesort(int *arr,int n){
    for(int i = 0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
             }

            for(int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<arr[j]<<" "<<arr[j+1]<<endl;
        }
        cout<<endl;

         
    }
}
 
int main(){
    int arr[5] = {5,4,3,2,1};
     bubblesort(arr,5);
    for(int x: arr){
        cout<<x<<" ";
    }
}