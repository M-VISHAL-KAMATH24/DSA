import java.util.*;
public class LongestSubstring2 {
    public static String sizeofSubstring(String s){
        int n=s.length();
        if(n==0){
            return "";
        }
        if(s==null){
            return "";
        }
        Map<Character,Integer> lastindex=new HashMap<>();
        int left=0;
        int maxlen=0;
        int maxstart=0;
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
                maxstart=left;
            }
        }
        return s.substring(maxstart, maxstart+maxlen);
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(sizeofSubstring(s));
    

    }
    
}
