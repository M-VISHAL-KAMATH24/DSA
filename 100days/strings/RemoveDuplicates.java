import java.util.*;
public class RemoveDuplicates {
    public static String removedups(String str){
        if(str==null){
            return null;
        }
        StringBuilder str1=new StringBuilder();
        HashSet<Character> record=new HashSet<>();
        for(int i=str.length()-1;i>=0;i--){
            char c=str.charAt(i);
            if(!record.contains(c)){
                record.add(c);
                str1.insert(0, c);
            }
        }
        return str1.toString();
    }
    
     public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(removedups(s));
    }
}
