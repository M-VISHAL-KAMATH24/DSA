import java.util.*;
public class MatrixSearch {
    public static boolean searchelement(int[][] matrix,int target){
        if(matrix==null || matrix.length==0 ||matrix[0].length==0){
            return false;
        }
        int rows=matrix.length;
        int cols=matrix[0].length;
        int r=0;
        int c=cols-1;

        while(r<rows&&c>=0){
            int val=matrix[r][c];
            if(val==target){
                return true;
            }else if(val>target){
                c--;
            }else{
                r++;

            }
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of rows and columns");
        int r1=sc.nextInt();
        int c1=sc.nextInt();
        int[][] matrix=new int[r1][c1];
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
        if(searchelement(matrix, 5)){
            System.out.println("sucess");
        }else{
            System.out.println("fail");
        }
        sc.close();
        
    }
}
