
 import java.util.*;

public class CountPairsWithSum {
    public static int countPairs(int[] arr, int target) {
        Map<Integer, Integer> freq = new HashMap<>();
        int count = 0;

        for (int num : arr) {
            int complement = target - num;

            // if complement exists, add its frequency to count
            if (freq.containsKey(complement)) {
                count += freq.get(complement);
            }

            // increase frequency of current number
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        return count;
    }

    public static void main(String[] args) {
        int[] arr = {1, 5, 7, -1, 5};
        int target = 6;
        System.out.println("Count of pairs with sum " + target + ": " + countPairs(arr, target));
    }


}
