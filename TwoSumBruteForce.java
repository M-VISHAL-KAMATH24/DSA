import java.util.*;
public class TwoSumBruteForce {
    public static int[] bruteforce(int[] arr,int target){
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]+arr[j]==target){
                    return new int[] {i,j};
                }
            }
        }
        throw new IllegalArgumentException("not found");
    }
     public static void main(String args[]){
        int[] arr={2,7,8,9,6,5};
        int[] res=bruteforce(arr, 19);
        System.out.println(res[0]+" "+res[1]);
}
}
