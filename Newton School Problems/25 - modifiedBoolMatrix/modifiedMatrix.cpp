#include<bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while (T--)
    {
        int M;cin>>M;
        int N; cin >> N;
        bool arr[M][N]={0};
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cin>>arr[i][j]; 
            }
        }

        //modifing matrix
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(arr[i][j]==1){
                    for(int j=0;j<N;j++){
                        arr[i][j]=1;
                    }
                    break;
                }
            }
        }
        
        //printing modified matrix
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
    
}