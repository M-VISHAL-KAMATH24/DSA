import java.util.*;
public class BinarySearch {
    public static int BinarySearchIndex(int[] arr,int target){
        int n=arr.length-1;
        int left=0;
        int right=n;
        while(left<=right){
            int mid=(right+left)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }

    public static void main(String args[]){
        int[] arr={5,10,15,20,25,30,35,40,45};
        int result=BinarySearchIndex(arr, 56);
        if(result!=-1){
            System.out.println("found at "+result);
        }else{
            System.out.println("not found");
        }

    }
    
}
