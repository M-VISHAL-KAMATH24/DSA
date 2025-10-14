//first non repeating charecter in the string 
import java.util.*;
public class FirstNonRepeatingCharecter {

    public static Character extract_Character(String s){
        s=s.replaceAll("[^a-zA-Z0-9]","").toLowerCase();
        Map<Character,Integer> count=new HashMap<>();
        //count frequency of each character
        for(char c : s.toCharArray()){
            count.put(c, count.getOrDefault(c,0)+1);

        }
        for(char c:s.toCharArray()){
            if(count.get(c)==1){
                return c;
            }
        }
        return null;
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        Character res=extract_Character(s);
        if(res!=null){
            System.out.println("the first non repeating character is "+res);
        }else{
            System.out.println("no non repating charecter");
        }
    }
    
}
