import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class maxParityInArrayUsingMergeSort{


    static  int merge(int[] arr,int l,int mid,int r){
        int size=(r-l)+1;
        int lMin[]=new int[size];
        int rMax[]=new int[size];

        //adding elements with min and max value calculation from start and end respectively
        lMin[0]=arr[0];
        for(int i=1;i<size;i++){
            lMin[i]=Math.min(lMin[i-1],arr[l+i]);
        }
        int right=r;
        rMax[size-1]=arr[right--];
        for(int j=size-2;j>=0;j--){
            rMax[j]=Math.max(rMax[j+1],arr[right]);
            right--;
        }
        //Print the array
//        for(int i=0;i<size;i++){
//            System.out.println(lMin[i]+" "+rMax[i]);
//        }
//        System.out.println();

        int i=0,j=0;
        int ans=-1;

        while(i<size && j<size){
            if(lMin[i]<rMax[j]){
                ans=Math.max(ans,(j-i));
                j++;
            }else{
                i++;
            }
        }

        return ans;
    }

    static int mergeSort(int arr[],int l,int r){
        if(l>=r){return -1;}
        int mid=(l+r)/2;
        int left;int right;
        left=mergeSort(arr,l,mid);

        right=mergeSort(arr,mid+1,r);

        int ans=merge(arr,l,mid,r);
        return Math.max(ans,Math.max(left,right));
    }


    static int maxParityIndex(int[] arr,int N){
        int max=mergeSort(arr,0,N-1);
        if(max<=0){
            return -1;
        }
        return max;
    }




    static int maxDiffArray(int arr[],int N){
        int[] a=new int[N];
        int[] b=new int[N];
        //print
//        for(int i=0;i<N;i++){
//            System.out.print(" "+arr[i]);
//        }System.out.println();
        a[0]=arr[0];
        for(int i=1;i<N;i++){
            a[i]=Math.min(a[i-1],arr[i]);
        }
        b[N-1]=arr[N-1];
        for(int j=N-2;j>=0;j--){
            b[j]=Math.max(b[j+1],arr[j]);
        }

        //print
        for(int i=0;i<N;i++){
            System.out.println(a[i]+" "+b[i]+ " "+arr[i]);
        }

        int i=0,j=0;int ans=-1;
        while(i<N && j<N){
            if(a[i]<=b[j]){
                ans=Math.max(ans,(j-i));
                j++;
            }
            else{
                i++;
            }

        }

        return ans;
    }


    public static void main (String[] args) {
        // Your code here
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int[] arr=new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

//        System.out.println(maxDiffArray(arr,N));
        System.out.println(maxParityIndex(arr,N));
    }
}
