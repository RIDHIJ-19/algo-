#include <bits/stdc++.h>
using namespace std;

void waveprint(int arr[100][100],int r,int c){
    for(int col = 0;col <c;col++){
        if(col %2==0){
            for(int i = 0;i<r;i++){
                cout<<arr[i][col]<<" ";
            }
        }else{
            for(int i = r-1;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[100][100] = {0};
    int r,c;
    cin>>r>>c;
    int val = 1;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            arr[i][j] = val++;     
            cout<<arr[i][j]<<" ";      
        }
        cout<<endl;
    }

    cout<<endl;
    waveprint(arr,r,c);
    
    return 0;
    
}