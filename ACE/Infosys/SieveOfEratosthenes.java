
import java.util.*;
public class SieveOfEratosthenes{
    public static void PrimeNumbers(int n){
        boolean[] prime=new boolean[n+1];
        for(int i=0;i<=n;i++){
            prime[i]=true;
        }
        //mark the non prime
        for(int p=2;p*p<=n;p++){
            if(prime[p]){
                //mark all multiples of p as not prime
                for(int i=p*p;i<=n;i+=p){
                    prime[i]=false;
                }
            }
        }
        System.out.println("prime numbers are");
        for(int i=2;i<=n;i++){
            if(prime[i]){
                System.out.print(i+" ");
            }
        }
        System.out.println();
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int n=sc.nextInt();
        PrimeNumbers(n);

    }
}