import java.util.*;
public class NumberPalindrome {
    public static boolean checkpalindrome(int num){
        // if(num<0){
        //     return false;
        // }
        // int original=num;
        // int reversed=0;
        // while(num>0){
        //     int digit=num%10;
        //     reversed=reversed*10+digit;
        //     num/=10;
        // }
        // return original==reversed;

        String s=String.valueOf(num);
        int left =0;
        int right=s.length()-1;
        while(left<right){
            if(s.charAt(left)!=s.charAt(right)){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public static void main(String args[]){
    System.out.println(checkpalindrome(12121));
}
    
}
