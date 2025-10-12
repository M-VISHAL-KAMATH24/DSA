import java.util.*;
public class MatrixSearchReturnIndex {
    public static int[] searchIndex(int[][] matrix,int target){
        if(matrix==null || matrix.length==0 || matrix[0].length==0){
            return new int[]{-1,-1};
        }
        int rows=matrix.length;
        int cols=matrix[0].length;
        int r=0;
        int c=cols-1;

        while(r<rows && cols>=0){
            int value=matrix[r][c];
            if(value==target){
                return new int[]{r,c};
            }else if(value>target){
                c--;
            }else{r++;
            }
        }
        return new int[]{-1,-1};
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the rows and columns");
        int r1=sc.nextInt();
        int c1=sc.nextInt();
        int[][] matrix=new int[r1][c1];
        System.out.println("enter the lements of the matrix");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
         for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
        int[] res=searchIndex(matrix, 5);
        System.out.println("the results are");
        System.out.println(res[0]+" "+res[1]);
    }
}
