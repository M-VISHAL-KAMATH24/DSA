import java.util.*;
public class CheckAnagramUsingHashmap {
    public static boolean checkAnagram(String s1,String s2){
        s1=s1.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        s2=s2.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        if(s1.length()!=s2.length()){
            return false;
        }
        Map<Character,Integer> checker=new HashMap<>();
        for(char c:s1.toCharArray()){
            checker.put(c,checker.getOrDefault(c,0)+1);

        }
        for(char c:s2.toCharArray()){
            if(!checker.containsKey(c)){
                return false;
            }
            checker.put(c,checker.get(c)-1);
        }
        for(int count:checker.values()){
            if(count!=0){
                return false;
            }
        }
        return true;
    }
    
public static void main(String[] args) {
    

    Scanner sc=new Scanner(System.in);
        System.out.println("enter the string1");
        String s1=sc.nextLine();
        System.out.println("enter the string2");
        String s2=sc.nextLine();
        System.out.println(checkAnagram(s1, s2));
}
}
