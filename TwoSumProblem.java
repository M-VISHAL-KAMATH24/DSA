import java.util.*;
public class TwoSumProblem {
    public static int[] TwoSum(int[] arr,int target){
        if(arr==null){
            throw new IllegalArgumentException("the array is empty");
        }
        Map<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<arr.length;i++){
            int complement=target-arr[i];
            if(map.containsKey(complement)){
                return new int[]{map.get(complement),i};
            }
            map.put(arr[i], i);
        }
        throw new IllegalArgumentException("target not found");
    }

    public static void main(String args[]){
        int[] arr={2,7,8,9,6,5};
        int[] res=TwoSum(arr, 9);
        System.out.println(res[0] +" "+res[1]);


    }
    
}
