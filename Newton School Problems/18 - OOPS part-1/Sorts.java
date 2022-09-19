package OOPS;
public class Sorts{
class SelectionSort implements ISort{
    @Override
    public int[] sort(int[] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }
}

class BubbleSort implements ISort{
    @Override
    public int[] sort(int[] arr){
    int count=1;
    while(count<arr.length){
        for(int i=0;i<arr.length-count;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        count++;
    }
    return arr;
    
    }
}

class InsertionSort implements ISort{
    @Override
    public int[] sort(int[] arr){
        for(int i=1;i<arr.length;i++){
		    int b = i-1;
		    int key = arr[i];
		    while(b>=0 && arr[b]>key)  arr[b+1] = arr[b--];
		    arr[b+1] = key;
		}
        return arr;
    }
}

class MergeSort implements ISort{
    @Override
    public int[] sort(int[] arr){
        mergeSort(arr,0,arr.length-1);
        return arr;
    }

    public static void mergeSort(int[] arr,int l,int r){
        if(l<r){
            int mid=(l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);   
        }
    }

    public static void  merge(int[] arr,int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;
        int[] a=new int[n1];
        int[] b=new int[n2];
        for(int i=0;i<n1;i++){
            a[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            b[i]=arr[mid+1+i];
        }
        int i=0,j=0,k=l;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]=a[i];
                k++;i++;
            }else{
                arr[k]=b[j];
                k++;j++;
            }
        }
        while(i<n1){
            arr[k]=a[i];
            k++;i++;
        }
        while(j<n2){
            arr[k]=a[j];
            k++;j++;
        }


    }

}}
   

