import java.util.*;
public class TopKFrequent {
    public static List<Integer> Kthfrequent(int[] nums,int k){
        Map<Integer,Integer> hashmap=new HashMap<>();
        for (int num : nums){
            hashmap.put(num, hashmap.getOrDefault(num,0 )+1);
        }
        PriorityQueue<Map.Entry<Integer,Integer>> minheap=new PriorityQueue<>((a,b)->a.getValue()-b.getValue());
        for(Map.Entry<Integer,Integer> entry:hashmap.entrySet()){
            minheap.add(entry);
            if(minheap.size()>k){
                minheap.poll();
            }
        }
        List<Integer> result=new ArrayList<>();
        while(!minheap.isEmpty()){
            result.add(minheap.poll().getKey());
        }
        Collections.reverse(result);
        return result;
    }
    public static void main(String[] args) {
        int[] nums = {1, 1, 1, 2, 2, 3};
        int k = 2;

        List<Integer> result = Kthfrequent(nums, k);
        System.out.println("Top " + k + " frequent elements: " + result);
    }
    
}
