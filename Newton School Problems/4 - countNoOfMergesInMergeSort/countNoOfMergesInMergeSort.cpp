#include<bits/stdc++.h>

using namespace std;



void merge(int arr[],int l,int mid ,int r){

    //making subarrays from l to mid and from mid to r
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    //assigning elements to (subarrays) from l to mid and from mid to r of main array (arr)
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }

    //sorting using two pointers technique
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }else{
            arr[k++]=b[j++];
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }

}

void mergeSort(int arr[],int l,int r,int *count){

    if(l>=r){ return;}
    // static int count;
    int mid = (l+r)/2;
    mergeSort(arr,l,mid,count);
    mergeSort(arr,mid+1,r,count);
    (*count)=(*count)+1;
    merge(arr,l,mid,r);
    
}

int main(){
    int N;cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int count=0;
    mergeSort(arr,0,N-1,&count);

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<count<<endl;
}