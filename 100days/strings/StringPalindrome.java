import java.util.*;
public class StringPalindrome {
    public static boolean checkPalindrome(String str){
        str=str.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str.charAt(i)!=str.charAt(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        System.out.println(checkPalindrome(s));
    }
    
}
