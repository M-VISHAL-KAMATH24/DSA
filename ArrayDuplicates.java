import java.util.*;

public class ArrayDuplicates {
    public static List<Integer> findDups(int[] arr) {
        if (arr == null || arr.length == 0) {
            return new ArrayList<>();
        }
        HashSet<Integer> seen = new HashSet<>();
        List<Integer> duplicates=new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            if (seen.contains(arr[i])) {
                duplicates.add(arr[i]);
            }
            seen.add(arr[i]);
        }
        return duplicates;
    }

    public static void main(String[] args) {
        int[] arr = {12, 5, 6, 54, 54, 4, 12};
        System.out.println(findDups(arr)); // Output: 54
    }
}