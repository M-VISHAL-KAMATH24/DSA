import java.util.*;
public class CheckAnagramsusingSort {
    public static boolean checkAnagram(String s1,String s2 ){
        s1=s1.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        s2=s2.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        if(s1.length()!=s2.length()){
            return false;
        }
        char[] a1=s1.toCharArray();
        char[] a2=s2.toCharArray();
        Arrays.sort(a1);
        Arrays.sort(a2);
        return Arrays.equals(a1,a2);

    }

     public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string1");
        String s1=sc.nextLine();
        System.out.println("enter the string2");
        String s2=sc.nextLine();
        System.out.println(checkAnagram(s1, s2));
    }
    
}
