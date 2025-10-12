import java.util.*;
public class StringPalindrome {
    public static boolean isstringpalindrome(String str){
        if(str==null){
            return false;
        }
        str=str.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();
        int left=0;
        int right=str.length()-1;
        while(left<right){
            if(str.charAt(left)!=str.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }    
    public static void main(String args[]){
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the string to be chekced");
        String str=sc.nextLine();
        System.out.println(isstringpalindrome(str));
    }
}
