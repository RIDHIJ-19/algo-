#include <bits/stdc++.h>
using namespace std;

void magicpark(char arr[][100],int n,int m,int k,int s){
    int c = s;
    bool flag = true;
    for(int i = 0;i<n;i++){

        for(int j = 0;j<m;j++){
            if(c<k){
                flag = false;
                break;
            }
            if(arr[i][j] == '.'){
                
                c-=2;
            }else if(arr[i][j]=='*'){
                
                c+=5;

            }else{
                
                break;

            }
            if(j!= m-1){
                c--;
            }

        }
        
        if(!flag){
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
    }else{
        cout<<"Yes"<<endl;
        cout<<c<<endl;
    }
}

int main(){
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[101][100];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    magicpark(arr,n,m,k,s);

}