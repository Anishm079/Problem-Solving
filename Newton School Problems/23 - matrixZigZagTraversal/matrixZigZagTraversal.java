//import java.util.LinkedList;
import java.util.*;
import java.io.*;


/*
PROBLEM STATEMENT:
Given a 2d matrix of size M*N, print the zig traversal of the matrix as shown:-

Consider a matrix of size 5*4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20

ZigZag traversal:-

1
5 2
9 6 3
13 10 7 4
17 14 11 8
18 15 12
19 16
20

 */
public class matrixZigZagTraversal {




    static int min(int a, int b)
    {
        return (a < b) ? a : b;
    }

    static int min(int a, int b, int c)
    {
        return min(min(a, b), c);
    }

    static int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    static void ZigZagTraversal(int matrix[][],int ROW,int COL)
    {

        for (int line = 1;
             line <= (ROW + COL - 1);
             line++) {

            int start_col = max(0, line - ROW);

            int count = min(line, (COL - start_col),
                    ROW);

            for (int j = 0; j < count; j++)
                System.out.print(matrix[min(ROW, line)
                        - j- 1][start_col + j]
                        + " ");

            System.out.println();
        }
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int M= sc.nextInt();
        int N= sc.nextInt();
        int [] [] arr=new int[M][N];

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                arr[i][j]= sc.nextInt();
            }
        }

        ZigZagTraversal(arr,M,N);

    }
}
