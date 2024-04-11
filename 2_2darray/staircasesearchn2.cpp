#include <bits/stdc++.h>
using namespace std;

void staircase(int arr[100][100],int r,int c,int k){
    bool f = false;
    for(int i = 0;i <r;i++){         
        for(int j = 0;j<c;j++){
              if(arr[i][j] == k){
                f = true;
                cout<<"found at "<< i<<" "<<j<<endl;
              }  
        }      
            
    }
    if(!f){
        cout<<"Not found"<<endl;
    }
         
}


int main(){
    int arr[100][100] = {0};
    int r,c,k;
    cin>>r>>c>>k;
    int val = 1;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            arr[i][j] = val++;     
            cout<<arr[i][j]<<" ";      
        }
        cout<<endl;
    }
    
    staircase(arr,r,c,k);
    
    return 0;
    
}