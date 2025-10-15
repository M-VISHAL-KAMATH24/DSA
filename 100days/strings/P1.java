//Given a string s, return the smallest contiguous substring of s that contains all the distinct characters present in s at least once. If multiple answers have the same minimal length, return the leftmost one.
import java.util.*;
public class P1 {
public static String problem(String s){
    //count the number of distinct charecters required
    Set<Character> distinct=new HashSet<>();
    for(char c:s.toCharArray()){
        distinct.add(c);
    }
    int required=distinct.size();
    //sliding window
    Map<Character,Integer> windowCount=new HashMap<>();
    int formed=0;//distinct charecter in the window
    int minLen=Integer.MAX_VALUE;
    int minStart=0;
    int left=0;
    for(int right=0;right<s.length();right++){
        char cr=s.charAt(right);
        windowCount.put(cr,windowCount.getOrDefault(cr, 0)+1);
        if(windowCount.get(cr)==1){
            formed++;
        }
        while(formed==required&&left<=right){
            int windowlen=right-left+1;
            if(windowlen<minLen){
                minLen=windowlen;
                minStart=left;
            }
            //shrink fromleft
            char c1=s.charAt(left);
            windowCount.put(c1,windowCount.get(c1)-1);
            if(windowCount.get(c1)==0){
                formed--;
            }

            left++;

        }
    }
    return (minLen==Integer.MAX_VALUE)?"":s.substring(minStart, minStart+minLen);
}

    public static void main(String args[]){
         Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(problem(s));

    }
    
}



// approach:
// 1. created the set to count teh distinct charecter in the string
// 2. created the sliding window usi g the hasmap where the formed is increased each time the unique charecter is added
// 3. when formed=required shrink from the left.