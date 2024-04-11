#include <bits/stdc++.h>
using namespace std;

void rotate(int (*arr)[100] , int n){
    //reverse each row
    for(int i = 0 ;i<n;i++){
        int j = 0;
        while(j< n/2){
            swap(arr[i][j],arr[i][n-j-1]);
            j++;
        }
    }
    //transpose
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[j][i]<<" ";
        } 
        cout<<endl;        
    }

} 

void print(int arr[][100],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    rotate(arr,n);
   // print(arr,n);
}