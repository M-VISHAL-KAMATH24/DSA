import java.util.*;
public class MatrixTraversal {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of rows");
        int m=sc.nextInt();
        System.out.println("enter the number of columns");
        int n=sc.nextInt();
        int[][] matrix=new int[m][n];
        System.out.println("enter the matrix elements");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        System.out.println("matrix elements are");
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
