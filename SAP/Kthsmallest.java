import java.util.*;

public class Kthsmallest{
    public static int findkthsmall(int[] arr,int k){
        PriorityQueue<Integer> maxheap=new PriorityQueue<>(Collections.reverseOrder());
        for(int i=0;i<k;i++){
            maxheap.add(arr[i]);
        }
        for(int i=k;i<arr.length;i++){
            if(arr[i]<maxheap.peek()){
                maxheap.poll();
                maxheap.add(arr[i]);
            }
        }
        return maxheap.peek();
    }
    public static void main(String args[]){
         int[] arr = {7, 10, 4, 3, 20, 15};
        int K = 3;
        int result = findkthsmall(arr, K);
        System.out.println("K'th smallest element is: " + result);
    }
}