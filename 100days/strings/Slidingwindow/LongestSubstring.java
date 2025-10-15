//Longest Substring Without Repeating Characters (variable window)
import java.util.*;
public class LongestSubstring {
    public static int sizeofSubstring(String s){
        int n=s.length();
        if(s==null){
            return 0;
        }if(n==0){
            return 0;
        }
        Map<Character,Integer> lastindex=new HashMap<>();
        int maxlen=0;
        int left=0;
        for(int right=0;right<n;right++){
            char c=s.charAt(right);
            if(lastindex.containsKey(c)){
                int previndex=lastindex.get(c);
                if(previndex>=left){
                    left=previndex+1;
                }
            }
            lastindex.put(c,right);
            int windowlen=right-left+1;
            if(windowlen>maxlen){
                maxlen=windowlen;
            }
        }
        return maxlen;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(sizeofSubstring(s));
    

    }
    
}
