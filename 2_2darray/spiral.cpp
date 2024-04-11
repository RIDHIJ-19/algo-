#include <iostream>
using namespace std;

void spiralprint(int arr[100][100],int r,int c){
     int sr = 0,er = r-1,sc = 0,ec = c-1;
     while(sr<=er && sc<=ec){
        //l->r
        for(int i = sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";

        }
        sr++;
         
        //t-b
        for(int i = sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";

        }
        
        ec--;
        //r-l
        if(er>sr){
            for(int i = ec;i>=sc;i--){
            cout<<arr[er][i]<<" ";
            }
            er--;

        }
         
        //b-t
        if(ec>sc){
            for(int i = er;i>= sr;i--){
            cout<<arr[i][sc]<<" ";
            }
            sc++;
        }
        


     }
}

int main(){
     
    int r,c;
    cin>>r>>c;
    int val = 1;
    int arr[100][100];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            arr[i][j] = val++;     
            cout<<arr[i][j]<<" ";      
        }
        cout<<endl;
    }
    cout<<endl;
    spiralprint(arr,r,c);
    return 0;
    
}