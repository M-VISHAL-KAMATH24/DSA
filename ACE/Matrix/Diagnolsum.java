import java.util.*;
public class Diagnolsum{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the szie of square matrix");
        int n=sc.nextInt();
       ;
        int[][] matrix=new int[n][n];
        System.out.println("enter the matrix elements");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=sc.nextInt();
            }
        }
        int primary=0;
        int secondary=0;
        for(int i=0;i<n;i++){
            primary+=matrix[i][i];
            secondary+=matrix[i][n-1-i];
        }
        System.out.println("primary sum:"+primary);
        System.out.println("secondary sum:"+secondary);
        int totalsum=primary+secondary;
        if(totalsum%2!=0){
            totalsum-=matrix[n/2][n/2];
        }
        System.out.println("total sum:"+totalsum);
        sc.close();
    }
    
}
