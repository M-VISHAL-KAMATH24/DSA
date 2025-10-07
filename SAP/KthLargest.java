import java.util.*;

public class KthLargest{
    public static int findkthlarge(int[] arr,int k){
        PriorityQueue<Integer> minheap=new PriorityQueue<>();
        for(int i=0;i<k;i++){
            minheap.add(arr[i]);
        }
        for(int i=k;i<arr.length;i++){
            if(arr[i]>minheap.peek()){
                minheap.poll();
                minheap.add(arr[i]);
            }
        }
        return minheap.peek();
    }
    public static void main(String args[]){
         int[] arr = {7, 10, 4, 3, 20, 15};
        int K = 3;
        int result = findkthlarge(arr, K);
        System.out.println("K'th smallest element is: " + result);
    }
}