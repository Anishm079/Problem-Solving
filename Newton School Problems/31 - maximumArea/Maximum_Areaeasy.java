import java.util.Arrays;
import java.util.Scanner;

public class Maximum_Areaeasy{

    static int maxArea(int []arr,int N){
        int area=0;



        return area;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int N=sc.nextInt();
        int M=sc.nextInt();
        int H=sc.nextInt();
        int V=sc.nextInt();

        int HLines[]=new int[H];
        int VLines[]=new int[V];
        for(int i=0;i<H;i++){
            HLines[i]=sc.nextInt();
        }
        for(int i=0;i<V;i++){
            VLines[i]=sc.nextInt();
        }

        int arr[][]=new int[N][M];

        Arrays.sort(HLines);
        Arrays.sort(VLines);
        int maxArea=0;
        int Hmax=M-HLines[HLines.length-1]-1;
        int Vmax=N-VLines[VLines.length-1]-1;
        
        for(int i=1;i<V;i++){
            
            Vmax=Math.max(Vmax,VLines[i]-VLines[i-1]);
        }
        Vmax=Math.max(Vmax,VLines[0]);
        for(int i=1;i<H;i++){
            
            Hmax=Math.max(Hmax,HLines[i]-HLines[i-1]);
        }
        Hmax=Math.max(Hmax,HLines[0]);
        System.out.println(Hmax*Vmax);
        // for(int i=0;i<N;i++){
        //     for(int j=0;j<M;j++){
        //         System.out.print(arr[i][j]+" ");
        //     }System.out.println();
        // }


        // //leetcode solutions
        // Arrays.sort(HLines);
		// Arrays.sort(VLines);

		// long maxHeight = Math.max(HLines[0], N - HLines[HLines.length-1]);
		// long maxWidth = Math.max(VLines[0], M- VLines[VLines.length-1]);

		// for(int idx=1; idx<=VLines.length-1; idx++){
		// 	long tempWidth = VLines[idx] - VLines[idx-1];
		// 	maxWidth = Math.max(maxWidth, tempWidth);
		// }

		// for(int idy = 1; idy <= HLines.length-1; idy++){
		// 	long tempHeight = HLines[idy] - HLines[idy-1];
		// 	maxHeight = Math.max(maxHeight, tempHeight);
		// }

		// System.out.println((int) ((maxHeight * maxWidth) % (1000000007)));
    }
}