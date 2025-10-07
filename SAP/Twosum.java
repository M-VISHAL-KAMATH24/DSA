import java.util.*;
public class Twosum {
    public static int[] twosumsol(int[] arr,int tar){
        Map<Integer,Integer> hasmap=new HashMap<>();
        for (int i=0;i<arr.length;i++){
            int complementary=tar-arr[i];
            if(hasmap.containsKey(complementary)){
                return new int[]{hasmap.get(complementary),i};
            }
            hasmap.put(arr[i],i);
        }
        return new int[]{};
    }
    public static void main(String[] args) {
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = twosumsol(nums, target);
        System.out.println("Indices: [" + result[0] + ", " + result[1] + "]");
    }
    
}
